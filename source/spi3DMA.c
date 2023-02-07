/*
 * spi3DMA.c
 *
 *  Created on: Jan 18, 2023
 *      Author: TBiberdorf
 *
 * This code is using the SPI3 peripheral port on the MIMRT1060-EVKB development board.
 *
 * MOSI J23-23
 * MISO J23-7
 * CLK  J23-21
 * CS   J23-22
 *
 * XBAR testing is using the input
 * J17-6 GPIO_SD_B0_00
 *
 * mirror the level on this pin to verify that its connected and working
 * J17-5 GPIO_SD_B0_03
 * and using a DMA option of XBAR1 out3 to set/clear/toggle this pin
 * J17-4 GPIO_SD_B0_02
 *
 */

#include <stdint.h>
//#include "config.h"
#include "spi3DMA.h"
#include "core_cm7.h"


static volatile uint8_t tl_ClocksInitFlag = 1;
static volatile uint8_t tl_PeripheralInitFlag = 1;

/**
 * @NOTE cannot confirm as to why the received data will not be placed correctly
 * in the buffer that is passed in the the parameter call, but will work fine if
 * stored to this memory buffer.
 *
 * Please explain????
 */
volatile uint8_t byteBuffer[25];

void EDMATcdReset(edma_tcd_t *tcd)
{

    /* Reset channel TCD */
    tcd->SADDR     = 0U;
    tcd->SOFF      = 0U;
    tcd->ATTR      = 0U;
    tcd->NBYTES    = 0U;
    tcd->SLAST     = 0U;
    tcd->DADDR     = 0U;
    tcd->DOFF      = 0U;
    tcd->CITER     = 0U;
    tcd->DLAST_SGA = 0U;
    /* Enable auto disable request feature */
    tcd->CSR   = DMA_CSR_DREQ(1);
    tcd->BITER = 0U;
}

#define __disable_interrupt() asm("cpsid   i")
#define __enable_interrupt()  asm("cpsie   i")

#define BUFFER_SIZE (25)
#define TRANSFER_SIZE     25U     /* Transfer dataSize */

#define LPSPI_MASTER_DMA_RX_CHANNEL (0) /**< to replicate the SDK example */
#define LPSPI_MASTER_DMA_TX_CHANNEL (1) /**< to replicate the SDK example */

#define CLEAR_TCD (2) /**< using channel 8 to set the bit */
#define SET_TCD (3) /**< using channel 7 to clear the bit */

#define CLEAR_CS_TCD (8) /**< using channel 8 to set the bit */
#define SET_CS_TCD (7) /**< using channel 7 to clear the bit */
#define SPI3_TX_TCD (6) /**< using channel 6 to TX SPI3 data */
#define SPI3_RX_TCD (5) /**< using channel 5 to RX SPI3 data */

#define SPI3_TX_NCS_TCD (9)  /**< using channel 9 to TX SPI3 data without the CS */
#define SPI3_RX_NCS_TCD (10) /**< using channel 10 to RX SPI3 data without the CS*/
#define START_SPI3RX_NCS_TCD (11) /**< using channel 11 to activate both channels 9 & 10 */
#define START_SPI3TX_NCS_TCD (12) /**< using channel 11 to activate both channels 9 & 10 */

#define TRIGGER_DMA_TX_CHANNEL (2)
#define TRIGGER_DMA_RX_CHANNEL (3)

volatile uint8_t spi3_Rx_Buffer[BUFFER_SIZE];
volatile uint8_t spi3_Tx_Buffer[BUFFER_SIZE];
//static uint8_t spi3_Tx_Buffer[BUFFER_SIZE] = {0x41,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,0x10,0x12,0x13,0x14,0x15,0x16,0x17,0x18};

/**
 * Initialize all the clocks needed
 */
void InitClocks()
{
	if( tl_ClocksInitFlag )
	{
		// start GPIO1 clocks
		// refer to Ref Manual, page 1146&1147, section 14.7.22
		// CCM Clock Gating Register 1 (CCM_CCGR1) bits 27..26
		CCM->CCGR1 |= 0x03000000;

		// start GPIO2 clocks
		// refer to Ref Manual, page 1144&1145, section 14.7.21
		// CCM Clock Gating Register 1 (CCM_CCGR1) bits 31..30
		CCM->CCGR1 |= 0xC0000000;

		// start GPIO3 clocks
		// refer to Ref Manual, page 1147&1148, section 14.7.23
		// CCM Clock Gating Register 2 (CCM_CCGR1) bits 27..26
		CCM->CCGR2 |= 0x03000000;

		// start XBAR1 clocks
		// refer to Ref Manual, page 1147&1148, section 14.7.23
		// CCM Clock Gating Register 2 (CCM_CCGR2) bits 23..22
		CCM->CCGR2 |= 0x00C00000;

		// start SPI3 clocks
		// refer to Ref Manual, page 1146&1147, section 14.7.22
		// CCM Clock Gating Register 1 (CCM_CCGR1) bits 5..4
		CCM->CCGR1 |= 0x00000030;
		tl_ClocksInitFlag = 0;
	}
}


void InitDMAandEDMA()
{
	// start DMA0 clocks
	// refer to Ref Manual, page 1151&1152, section 14.7.26
	// CCM Clock Gating Register 5 (CCM_CCGR5) bits 7..6
	CCM->CCGR5 |= 0xC0;

	// now configure the DMAMUX to the SPI3 RX/TX registers.
	DMAMUX->CHCFG[LPSPI_MASTER_DMA_RX_CHANNEL] = 0x0;
	DMAMUX->CHCFG[LPSPI_MASTER_DMA_RX_CHANNEL] = kDmaRequestMuxLPSPI3Rx;  // set SPI3 RX
	DMAMUX->CHCFG[LPSPI_MASTER_DMA_RX_CHANNEL] |= DMAMUX_CHCFG_ENBL_MASK; // enable

	DMAMUX->CHCFG[LPSPI_MASTER_DMA_TX_CHANNEL] = 0x0;
	DMAMUX->CHCFG[LPSPI_MASTER_DMA_TX_CHANNEL] = kDmaRequestMuxLPSPI3Tx;  // set SPI3 TX
	DMAMUX->CHCFG[LPSPI_MASTER_DMA_TX_CHANNEL] |= DMAMUX_CHCFG_ENBL_MASK; // enable
}

/**
 * Initialize the SPI3 port to support CS0
 * The following pins are configured and where they are mapped to on the EVKB board
 * J23-22   GPIO_AD_B0_03      LPSP3 CS0
 * J23-21   GPIO_AD_B0_00      LPSPI3 CLK
 * J32-23   GPIO_AD_B1_14      LPSPI3 MOSI
 * J23-7    GPIO_AD_B0_02      LPSPI3 MISO
 *
 */
void InitSPI3Peripheral()
{
	if( tl_PeripheralInitFlag )
	{
#define ALT2 (2)
#define ALT5 (5)
#define ALT7 (7)
#define CTL_PAD (0x1088) // SRE 0,DSE 1,SPEED 2,ODE 0,PKE 1,PUE 0, HYS 0
		// GPIO_AD_B0_03 LPSP3 CS0
		IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_03] = ALT7;
		IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_03] = CTL_PAD;
		// GPIO_AD_B0_00 LPSPI3 CLK
		IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_00] = ALT7;
		IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_00] = CTL_PAD;
		// GPIO_AD_B0_02 LPSPI3 MISO
		IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_02] = ALT7;
		IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_02] = CTL_PAD;
		// GPIO_AD_B1_14 LPSPI3 MOSI
		IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_14] = ALT2;
		IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B1_14] = CTL_PAD;

		LPSPI3->CR  = 0;  // disable
		LPSPI3->CFGR1 = 1; // master mode
		LPSPI3->CR  = 1;  // enable
		LPSPI3->CR  = 0x305; // reset Rx FIFO, TX FIFO, debug en, enable
		LPSPI3->CCR = 0x08082032; // SDK x8, PCS x8, DBT x20 DIV x32
		LPSPI3->TCR = 0xC0000007; // CPOL 1, CPHA 1, PRE 1, PCS0, LSBF 0, BYSW 0, CONT 0, CONTC 0, RXMSK 0, TXMSK 0, WID 1, FRAME 8
		LPSPI3->CR  = 0x05; // debug en, enable

		InitDMAandEDMA();

		tl_PeripheralInitFlag = 0;
	}
}

/**
 * The GPIO has a SET/CLEAR register that works off a bit mask.
 * In our case we want to change the state of GPIO3 IO15.  So we set
 * a static variable with bit 15 set to be used to send to either the
 * CLEAR or SET register.
 */
const uint32_t gpioPin = 1<<15;

const uint32_t tl_DMA0ERQCh9_10 = 10;

/**
 * as part of MultiDMA test 3, configure channel 0 for RX
 */
void ConfigureDMAMux0()
{
	DMA_Type *dmaBASE = DMA0;
	edma_tcd_t *rxTCD;

	/* Configure rx EDMA transfer channel 0*/
	rxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[0];
	EDMATcdReset(rxTCD);
	/*!< SADDR register, used to save source address */
	rxTCD->SADDR = (uint32_t)&(LPSPI3->RDR); // our source address is the SPI3 Rx register
	/*!< SOFF register, save offset bytes every transfer */
	rxTCD->SOFF = 0;            // source address offset set to zero as it does not change
	/*!< SLAST register */
	rxTCD->SLAST = 0;   // change to make to source address after completion of transfer

	/*!< DADDR register, used for destination address */
	rxTCD->DADDR = byteBuffer; // where the RX data will be placed
	/*!< DOFF register, used for destination offset */
	rxTCD->DOFF = 1;            // each destination address write will increment by 1 byte
	/*!< ATTR register, source/destination transfer size and modulo */
	/*!< DLASTSGA register, next tcd address used in scatter-gather mode */
	rxTCD->DLAST_SGA = (-1*BUFFER_SIZE); // change to make to destination address after transfer completed

	rxTCD->ATTR = 0x0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
	/*!< Nbytes register, minor loop length in bytes */
	rxTCD->NBYTES = 1;  // number of bytes in each minor loop transfer.
	/*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
	rxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	/*!< BITER register, begin minor loop count. */
	rxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation

	/*!< CSR register, for TCD control status */
	// in our case will will trigger a IRQ when the major cycle count completes
	rxTCD->CSR |= DMA_CSR_INTMAJOR_MASK;
}

/**
 * as part of MultiDMA test 3, configure channel 1 for Tx
 */
void ConfigureDMAMux1()
{
	DMA_Type *dmaBASE = DMA0;
	edma_tcd_t *txTCD;
	/* Configure Tx EDMA transfer, channel 1 */
	txTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[1];
	EDMATcdReset(txTCD);

	txTCD->SADDR = spi3_Tx_Buffer;  // our source buffer address to start reading from
	txTCD->SOFF = 1;            // source address offset set to 1 to increment by one byte per transfer
	txTCD->SLAST = (-1*BUFFER_SIZE);            // source address offset set to 1 to increment by one byte per transfer

	txTCD->DADDR = (uint32_t)&(LPSPI3->TDR); // where the TX data will be placed SPI3 Tx Register
	txTCD->DOFF = 0;            // each destination address is a hardware registers, so we will not increment it
	txTCD->DLAST_SGA = 0;

	txTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
	txTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
	txTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	txTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation

}

/**
 * Activate CS to start transfer
 */
void ConfigureDMAMux2()
{
	edma_tcd_t *clearTCD;
	DMA_Type *dmaBASE = DMA0;
//	static uint32_t gpioPin = 1<<15;
#define DELAY_BEFORE_NEXT_DMA_TRIGGER (4)
	DMAMUX->CHCFG[CLEAR_TCD] = 0x0;
	DMAMUX->CHCFG[CLEAR_TCD] = kDmaRequestMuxXBAR1Request3;  // XBAR1 output 3
	DMAMUX->CHCFG[CLEAR_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable

    /* Configure toggle EDMA transfer channel 8*/
	clearTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[CLEAR_TCD];
	EDMATcdReset(clearTCD);

	/*!< SADDR register, used to save source address */
	clearTCD->SADDR = (uint32_t)&(gpioPin); // our source address is the SPI3 Rx register
	/*!< SOFF register, save offset bytes every transfer */
	clearTCD->SOFF = 0;                     // source address offset set to zero as it does not change
	/*!< SLAST register */
	clearTCD->SLAST = 0; // number of bytes to change source address after completion

	/*!< DADDR register, used for destination address */
	clearTCD->DADDR = (uint32_t)&(GPIO3->DR_CLEAR); // where the gpioPIN value will be placed
	/*!< DOFF register, used for destination offset */
	clearTCD->DOFF = 0;            // each destination address write will increment by 1 byte
	/*!< DLASTSGA register, next tcd address used in scatter-gather mode */
	clearTCD->DLAST_SGA = 0; // change to make to destination address after transfer completed

	/*!< ATTR register, source/destination transfer size and modulo */
	clearTCD->ATTR = 0x0202;       // transfer size of 4 byte (010b => 32-bit) refer to page 134 of RM spec.
	/*!< Nbytes register, minor loop length in bytes */
	clearTCD->NBYTES = 4*DELAY_BEFORE_NEXT_DMA_TRIGGER;           // number of bytes in each minor loop transfer.
	/*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
	clearTCD->CITER = 1;  // number of bytes(loops) in the complete one ADC read operation
	/*!< BITER register, begin minor loop count. */
	clearTCD->BITER = 1;  // number of bytes(loops) in the complete one ADC read operation

	/*!< CSR register, for TCD control status */
	clearTCD->CSR = SET_TCD<<8 | 1<<5; // need to set bit 5 to call eDMA channel SPI3_RX_TCD when completed

	dmaBASE->SERQ = CLEAR_TCD; // enable DMA operations

}

/**
 * Negate CS after SPI transfer completed
 */
void ConfigureDMAMux3()
{
	edma_tcd_t *setTCD;
	DMA_Type *dmaBASE = DMA0;

	DMAMUX->CHCFG[SET_TCD] = 0x0;
	DMAMUX->CHCFG[SET_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable

    /* Configure toggle EDMA transfer channel 8*/
	setTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[SET_TCD];
	EDMATcdReset(setTCD);
	/*!< SADDR register, used to save source address */
	setTCD->SADDR = (uint32_t)&(gpioPin); // our source address is the SPI3 Rx register
	/*!< SOFF register, save offset bytes every transfer */
	setTCD->SOFF = 0;            // source address offset set to zero as it does not change
	/*!< SLAST register */
	setTCD->SLAST = 0; // number of bytes to change source address after completion

	/*!< DADDR register, used for destination address */
	setTCD->DADDR = (uint32_t)&(GPIO3->DR_SET); // where the gpioPIN value will be placed
	/*!< DOFF register, used for destination offset */
	setTCD->DOFF = 0;            // each destination address write will increment by 1 byte
	/*!< DLASTSGA register, next tcd address used in scatter-gather mode */
	setTCD->DLAST_SGA = 0; // change to make to destination address after transfer completed

	/*!< ATTR register, source/destination transfer size and modulo */
	setTCD->ATTR = 0x0202;       // transfer size of 4 byte (010b => 32-bit) refer to page 134 of RM spec.
	/*!< Nbytes register, minor loop length in bytes */
	setTCD->NBYTES = 4;           // number of bytes in each minor loop transfer.
	/*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
	setTCD->CITER = 1;  // number of bytes(loops) in the complete one ADC read operation
	/*!< BITER register, begin minor loop count. */
	setTCD->BITER = 1;  // number of bytes(loops) in the complete one ADC read operation

	/*!< CSR register, for TCD control status */
	setTCD->CSR = 0;

}


/**
 * Activate CS to start transfer
 */
void ConfigureDMAMux8()
{
	edma_tcd_t *clearTCD;
	DMA_Type *dmaBASE = DMA0;
//	static uint32_t gpioPin = 1<<15;
#define DELAY_BEFORE_NEXT_DMA_TRIGGER (4)
	DMAMUX->CHCFG[CLEAR_CS_TCD] = 0x0;
	DMAMUX->CHCFG[CLEAR_CS_TCD] = kDmaRequestMuxXBAR1Request3;  // XBAR1 output 3
	DMAMUX->CHCFG[CLEAR_CS_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable

    /* Configure toggle EDMA transfer channel 8*/
	clearTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[CLEAR_CS_TCD];
	EDMATcdReset(clearTCD);

	/*!< SADDR register, used to save source address */
	clearTCD->SADDR = (uint32_t)&(gpioPin); // our source address is the SPI3 Rx register
	/*!< SOFF register, save offset bytes every transfer */
	clearTCD->SOFF = 0;                     // source address offset set to zero as it does not change
	/*!< SLAST register */
	clearTCD->SLAST = 0; // number of bytes to change source address after completion

	/*!< DADDR register, used for destination address */
	clearTCD->DADDR = (uint32_t)&(GPIO3->DR_CLEAR); // where the gpioPIN value will be placed
	/*!< DOFF register, used for destination offset */
	clearTCD->DOFF = 0;            // each destination address write will increment by 1 byte
	/*!< DLASTSGA register, next tcd address used in scatter-gather mode */
	clearTCD->DLAST_SGA = 0; // change to make to destination address after transfer completed

	/*!< ATTR register, source/destination transfer size and modulo */
	clearTCD->ATTR = 0x0202;       // transfer size of 4 byte (010b => 32-bit) refer to page 134 of RM spec.
	/*!< Nbytes register, minor loop length in bytes */
	clearTCD->NBYTES = 4*DELAY_BEFORE_NEXT_DMA_TRIGGER;           // number of bytes in each minor loop transfer.
	/*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
	clearTCD->CITER = 1;  // number of bytes(loops) in the complete one ADC read operation
	/*!< BITER register, begin minor loop count. */
	clearTCD->BITER = 1;  // number of bytes(loops) in the complete one ADC read operation

	/*!< CSR register, for TCD control status */
	clearTCD->CSR = SPI3_TX_TCD<<8 | 1<<5; // need to set bit 5 to call eDMA channel SPI3_RX_TCD when completed

	dmaBASE->SERQ = CLEAR_CS_TCD; // enable DMA operations
}

/**
 * Negate CS after SPI transfer completed
 */
void ConfigureDMAMux7()
{
	edma_tcd_t *setTCD;
	DMA_Type *dmaBASE = DMA0;

	DMAMUX->CHCFG[SET_CS_TCD] = 0x0;
	DMAMUX->CHCFG[SET_CS_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable

    /* Configure toggle EDMA transfer channel 8*/
	setTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[SET_CS_TCD];
	EDMATcdReset(setTCD);
	/*!< SADDR register, used to save source address */
	setTCD->SADDR = (uint32_t)&(gpioPin); // our source address is the SPI3 Rx register
	/*!< SOFF register, save offset bytes every transfer */
	setTCD->SOFF = 0;            // source address offset set to zero as it does not change
	/*!< SLAST register */
	setTCD->SLAST = 0; // number of bytes to change source address after completion

	/*!< DADDR register, used for destination address */
	setTCD->DADDR = (uint32_t)&(GPIO3->DR_SET); // where the gpioPIN value will be placed
	/*!< DOFF register, used for destination offset */
	setTCD->DOFF = 0;            // each destination address write will increment by 1 byte
	/*!< DLASTSGA register, next tcd address used in scatter-gather mode */
	setTCD->DLAST_SGA = 0; // change to make to destination address after transfer completed

	/*!< ATTR register, source/destination transfer size and modulo */
	setTCD->ATTR = 0x0202;       // transfer size of 4 byte (010b => 32-bit) refer to page 134 of RM spec.
	/*!< Nbytes register, minor loop length in bytes */
	setTCD->NBYTES = 4;           // number of bytes in each minor loop transfer.
	/*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
	setTCD->CITER = 1;  // number of bytes(loops) in the complete one ADC read operation
	/*!< BITER register, begin minor loop count. */
	setTCD->BITER = 1;  // number of bytes(loops) in the complete one ADC read operation

	/*!< CSR register, for TCD control status */
	setTCD->CSR = 0;

}

/**
 * Configure SPI TX DMA transfer using channel SPI3_TX_TCD
 */
void ConfigureDMAMux6()
{
	edma_tcd_t *spi3TxTCD;
	DMA_Type *dmaBASE = DMA0;

	/* to remove any possible issue with other testing that may have been done */
	DMAMUX->CHCFG[LPSPI_MASTER_DMA_RX_CHANNEL] = 0x0;
	DMAMUX->CHCFG[LPSPI_MASTER_DMA_TX_CHANNEL] = 0x0;


	DMAMUX->CHCFG[SPI3_TX_TCD] =0;
//	DMAMUX->CHCFG[SPI3_TX_TCD] = kDmaRequestMuxLPSPI3Tx;
	DMAMUX->CHCFG[SPI3_TX_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable

    /* Configure toggle EDMA transfer channel 8*/
	spi3TxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[SPI3_TX_TCD];
	EDMATcdReset(spi3TxTCD);
	/*!< SADDR register, used to save source address */
	spi3TxTCD->SADDR = spi3_Tx_Buffer; // our source address is the SPI3 Rx register
	/*!< SOFF register, save offset bytes every transfer */
	spi3TxTCD->SOFF = 1;            // change our source back after completion
	/*!< SLAST register */
	spi3TxTCD->SLAST = -1*BUFFER_SIZE;

	/*!< DADDR register, used for destination address */
	spi3TxTCD->DADDR = (uint32_t)&(LPSPI3->TDR); // where the gpioPIN value will be placed
	/*!< DOFF register, used for destination offset */
	spi3TxTCD->DOFF = 0;            // each destination address write will increment by 1 byte
	/*!< DLASTSGA register, next tcd address used in scatter-gather mode */
	spi3TxTCD->DLAST_SGA = 0;

	/*!< ATTR register, source/destination transfer size and modulo */
	spi3TxTCD->ATTR = 0x0;       // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
	/*!< Nbytes register, minor loop length in bytes */
	spi3TxTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
	/*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
	spi3TxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	/*!< BITER register, begin minor loop count. */
	spi3TxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation

	/*!< CSR register, for TCD control status */
	spi3TxTCD->CSR = SET_CS_TCD<<8 | 1<<5 ;//| DMA_CSR_DREQ(1); // need to set bit 5 to call eDMA channel SET_CS_TCD when completed
}

void ConfigureDMAMux9()
{
	DMAMUX->CHCFG[SPI3_TX_NCS_TCD] = 0x0;
	DMAMUX->CHCFG[SPI3_TX_NCS_TCD] = kDmaRequestMuxLPSPI3Tx;  // set SPI3 TX
	DMAMUX->CHCFG[SPI3_TX_NCS_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable

	DMA_Type *dmaBASE = DMA0;
	edma_tcd_t *txTCD;
	/* Configure Tx EDMA transfer, channel 1 */
	txTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[SPI3_TX_NCS_TCD];
	EDMATcdReset(txTCD);

	txTCD->SADDR = spi3_Tx_Buffer;  // our source buffer address to start reading from
	txTCD->SOFF = 1;            // source address offset set to 1 to increment by one byte per transfer
	txTCD->SLAST = (-1*BUFFER_SIZE);            // source address offset set to 1 to increment by one byte per transfer

	txTCD->DADDR = (uint32_t)&(LPSPI3->TDR); // where the TX data will be placed SPI3 Tx Register
	txTCD->DOFF = 0;            // each destination address is a hardware registers, so we will not increment it
	txTCD->DLAST_SGA = 0;

	txTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
	txTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
	txTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	txTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation

}

void ConfigureDMAMux10()
{
	DMAMUX->CHCFG[SPI3_RX_NCS_TCD] = 0x0;
	DMAMUX->CHCFG[SPI3_RX_NCS_TCD] = kDmaRequestMuxLPSPI3Rx;  // set SPI3 RX
	DMAMUX->CHCFG[SPI3_RX_NCS_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable


	DMA_Type *dmaBASE = DMA0;
	edma_tcd_t *rxTCD;

	/* Configure rx EDMA transfer channel 0*/
	rxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[SPI3_RX_NCS_TCD];
	EDMATcdReset(rxTCD);
	/*!< SADDR register, used to save source address */
	rxTCD->SADDR = (uint32_t)&(LPSPI3->RDR); // our source address is the SPI3 Rx register
	/*!< SOFF register, save offset bytes every transfer */
	rxTCD->SOFF = 0;            // source address offset set to zero as it does not change
	/*!< SLAST register */
	rxTCD->SLAST = 0;   // change to make to source address after completion of transfer

	/*!< DADDR register, used for destination address */
	rxTCD->DADDR = byteBuffer; // where the RX data will be placed
	/*!< DOFF register, used for destination offset */
	rxTCD->DOFF = 1;            // each destination address write will increment by 1 byte
	/*!< ATTR register, source/destination transfer size and modulo */
	/*!< DLASTSGA register, next tcd address used in scatter-gather mode */
	rxTCD->DLAST_SGA = (-1*BUFFER_SIZE); // change to make to destination address after transfer completed

	rxTCD->ATTR = 0x0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
	/*!< Nbytes register, minor loop length in bytes */
	rxTCD->NBYTES = 1;  // number of bytes in each minor loop transfer.
	/*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
	rxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	/*!< BITER register, begin minor loop count. */
	rxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation

	/*!< CSR register, for TCD control status */
	// in our case will will trigger a IRQ when the major cycle count completes
	rxTCD->CSR |= DMA_CSR_INTMAJOR_MASK;

}

const uint8_t tl_DMA0SERQRx = SPI3_RX_NCS_TCD;
const uint8_t tl_DMA0SERQTx = SPI3_TX_NCS_TCD;

uint32_t tl_RxSrc = SPI3_RX_NCS_TCD;
uint32_t tl_RxDest = 0;

/**
 * Activate the SPI3 RX transfer
 */
void ConfigureDMAMux11()
{
	edma_tcd_t *triggerSPI3woCSTDC;
	DMA_Type *dmaBASE = DMA0;
	uint32_t testAddr;
//	static uint32_t gpioPin = 1<<15;
#define DELAY_BEFORE_NEXT_DMA_TRIGGER (4)
	DMAMUX->CHCFG[START_SPI3RX_NCS_TCD] = 0x0;
	DMAMUX->CHCFG[START_SPI3RX_NCS_TCD] = kDmaRequestMuxXBAR1Request3;  // XBAR1 output 3
	DMAMUX->CHCFG[START_SPI3RX_NCS_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable

    /* Configure toggle EDMA transfer channel 8*/
	triggerSPI3woCSTDC = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[START_SPI3RX_NCS_TCD];
	EDMATcdReset(triggerSPI3woCSTDC);

	/*!< SADDR register, used to save source address */
	triggerSPI3woCSTDC->SADDR = (uint32_t)&(tl_RxSrc); // our source address is the SPI3 Rx register
	/*!< SOFF register, save offset bytes every transfer */
	triggerSPI3woCSTDC->SOFF = 0;                     // source address offset set to zero as it does not change
	/*!< SLAST register */
	triggerSPI3woCSTDC->SLAST = 0; // number of bytes to change source address after completion

	/*!< DADDR register, used for destination address */
//	triggerSPI3woCSTDC->DADDR = (uint32_t)&(tl_RxDest); // where the DMA0->ERQ results will be placed

	triggerSPI3woCSTDC->DADDR = (uint32_t)&(DMA0->SERQ); // where the DMA0->ERQ results will be placed
	/*!< DOFF register, used for destination offset */
	triggerSPI3woCSTDC->DOFF = 0;            // each destination address write will increment by 1 byte
	/*!< DLASTSGA register, next tcd address used in scatter-gather mode */
	triggerSPI3woCSTDC->DLAST_SGA = 0; // change to make to destination address after transfer completed

	/*!< ATTR register, source/destination transfer size and modulo */
	triggerSPI3woCSTDC->ATTR = 0x0000;       // transfer size of 4 byte (010b => 32-bit) refer to page 134 of RM spec.
	/*!< Nbytes register, minor loop length in bytes */
	triggerSPI3woCSTDC->NBYTES = 4;           // number of bytes in each minor loop transfer.
	/*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
	triggerSPI3woCSTDC->CITER = 1;  // number of bytes(loops) in the complete one ADC read operation
	/*!< BITER register, begin minor loop count. */
	triggerSPI3woCSTDC->BITER = 1;  // number of bytes(loops) in the complete one ADC read operation

	/*!< CSR register, for TCD control status */
	triggerSPI3woCSTDC->CSR = START_SPI3TX_NCS_TCD<<8 | 1<<5 ;//| DMA_CSR_DREQ(1); // need to set bit 5 to call eDMA channel SET_CS_TCD when completed

	dmaBASE->SERQ = START_SPI3RX_NCS_TCD; // enable DMA operations
}

uint32_t tl_TxSrc = SPI3_TX_NCS_TCD;
uint32_t tl_TxDest = 0;
/**
 * Activate the SPI3 TX transfer
 */
void ConfigureDMAMux12()
{
	edma_tcd_t *triggerSPI3woCSTDC;
	DMA_Type *dmaBASE = DMA0;
//	static uint32_t gpioPin = 1<<15;
#define DELAY_BEFORE_NEXT_DMA_TRIGGER (4)
	DMAMUX->CHCFG[START_SPI3TX_NCS_TCD] = 0x0;
	DMAMUX->CHCFG[START_SPI3TX_NCS_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable

    /* Configure toggle EDMA transfer channel 8*/
	triggerSPI3woCSTDC = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[START_SPI3TX_NCS_TCD];
	EDMATcdReset(triggerSPI3woCSTDC);

	/*!< SADDR register, used to save source address */
	triggerSPI3woCSTDC->SADDR = (uint32_t)&(tl_TxSrc); // our source address is the SPI3 Rx register
	/*!< SOFF register, save offset bytes every transfer */
	triggerSPI3woCSTDC->SOFF = 0;                     // source address offset set to zero as it does not change
	/*!< SLAST register */
	triggerSPI3woCSTDC->SLAST = 0; // number of bytes to change source address after completion

	/*!< DADDR register, used for destination address */
//	triggerSPI3woCSTDC->DADDR = (uint32_t)&(tl_TxDest); // where the DMA0->ERQ results will be placed
	triggerSPI3woCSTDC->DADDR = (uint32_t)&(DMA0->SERQ); // where the DMA0->ERQ results will be placed
	/*!< DOFF register, used for destination offset */
	triggerSPI3woCSTDC->DOFF = 0;            // each destination address write will increment by 1 byte
	/*!< DLASTSGA register, next tcd address used in scatter-gather mode */
	triggerSPI3woCSTDC->DLAST_SGA = 0; // change to make to destination address after transfer completed

	/*!< ATTR register, source/destination transfer size and modulo */
	triggerSPI3woCSTDC->ATTR = 0x0000;       // transfer size of 4 byte (010b => 32-bit) refer to page 134 of RM spec.
	/*!< Nbytes register, minor loop length in bytes */
	triggerSPI3woCSTDC->NBYTES = 4;           // number of bytes in each minor loop transfer.
	/*!< CITER register, current minor loop numbers, for unfinished minor loop.*/
	triggerSPI3woCSTDC->CITER = 1;  // number of bytes(loops) in the complete one ADC read operation
	/*!< BITER register, begin minor loop count. */
	triggerSPI3woCSTDC->BITER = 1;  // number of bytes(loops) in the complete one ADC read operation

	/*!< CSR register, for TCD control status */
	triggerSPI3woCSTDC->CSR = 0;
}


void DMA5_DMA12_DriverIRQHandler()
{
	DMA5_irq();
}

void DMA5_irq(void)
{
	DMA_Type *dmaBASE = DMA0;
	static uint32_t irqDmaCnt = 0;
	dmaBASE->INT |= 1<<SPI3_RX_TCD; // clear DMA5 IRQ

	irqDmaCnt++;
}

/**
 * configure SPI RX DMA transfer using DMA channel SPI3_RX_TCD
 */
void ConfigureDMAMux5()
{
	edma_tcd_t *spi3RxTCD;
	DMA_Type *dmaBASE = DMA0;

	DMAMUX->CHCFG[SPI3_RX_TCD] = 0;
//	DMAMUX->CHCFG[SPI3_RX_TCD] = kDmaRequestMuxLPSPI3Rx;
	DMAMUX->CHCFG[SPI3_RX_TCD] |= DMAMUX_CHCFG_ENBL_MASK; // enable

    /* Configure toggle EDMA transfer channel 8*/
	spi3RxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[SPI3_RX_TCD];
	EDMATcdReset(spi3RxTCD);
	spi3RxTCD->SADDR = (uint32_t)&(LPSPI3->RDR); // our source address is the SPI3 Rx register
	spi3RxTCD->SOFF = 0;            // source address offset set to zero as it does not change
	spi3RxTCD->SLAST = 0;

	spi3RxTCD->DADDR = byteBuffer; // where the gpioPIN value will be placed
	spi3RxTCD->DOFF = 1;            // each destination address write will increment by 1 byte
	spi3RxTCD->DLAST_SGA = (-1*BUFFER_SIZE);

	spi3RxTCD->ATTR = 0x0;       // transfer size of 4 byte (010b => 32-bit) refer to page 134 of RM spec.
	spi3RxTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
	spi3RxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	spi3RxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation

	spi3RxTCD->CSR = DMA_CSR_INTMAJOR_MASK; //= 0;//DMA_CSR_DREQ(1);
	NVIC_EnableIRQ(SPI3_RX_TCD);
	spi3RxTCD->CSR = 0 ;
//	dmaBASE->SERQ = DMA_SERQ_SERQ(SPI3_RX_TCD); // eDMA starts transfer RX channel
//	dmaBASE->SERQ = SPI3_RX_TCD; // eDMA starts transfer RX channel

}

/**
 * configure LPSPI3 peripheral for DMA operations
 */
void ConfigureSPI3Peripheral()
{
	LPSPI_Type *spiBASE = LPSPI3;

	spiBASE->CR &= ~LPSPI_CR_MEN_MASK ; // disable LPSPI3
	spiBASE->CR |= (1<<FLUSH_TX_FIFO_SHIFT) | (1<<FLUSH_RX_FIFO_SHIFT); // flush FIFOs
	spiBASE->SR = kLPSPI_AllStatusFlag; // set bits to clear them
	spiBASE->IER &= ~kLPSPI_AllInterruptEnable; // clear all interrupts
	spiBASE->DER &= ~(LPSPI_DER_RDDE_MASK|LPSPI_DER_TDDE_MASK); // disable DMA

	spiBASE->FCR = 0; // clear watermark counts, DMA is fast enough to keep up

    /* Transfers will stall when transmit FIFO is empty or receive FIFO is full. */
	spiBASE->CFGR1 &= (~LPSPI_CFGR1_NOSTALL_MASK);

    /* Enable module for following configuration of TCR to take effect. */
	spiBASE->CR |= LPSPI_CR_MEN_MASK ; // enable LPSPI3

    /* For DMA transfer , we'd better not masked the transmit data and receive data in TCR since the transfer flow is
     * hard to controlled by software. */
	spiBASE->TCR & ~(LPSPI_TCR_CONT_MASK | LPSPI_TCR_CONTC_MASK /*| LPSPI_TCR_BYSW_MASK*/ | LPSPI_TCR_PCS_MASK);
	spiBASE->TCR |= ( 0xC0000000/* | LPSPI_TCR_CONT_MASK | LPSPI_TCR_BYSW_MASK*/ ) ;

	spiBASE->DER |= (LPSPI_DER_TDDE_MASK /*!< Transmit data DMA enable */ | LPSPI_DER_RDDE_MASK /*!< Receive data DMA enable */ );

}

/**
 * Initialize the XBAR singa will be read GPIO_SD_B0_00 Arduino Interface J17-6
 * Mirror that output GPIO_SD_B0_02 to J17-4
 * DMA IO GPIO_SD_B0_03 J17-5
 *
 */
void InitXBAR()
{
#define ALT3 (3)
#define ALT5 (5)
#define CTL_PAD (0x1088) // SRE 0,DSE 1,SPEED 2,ODE 0,PKE 1,PUE 0, HYS 0
#define CTL_PAD_INPUT (0xF000) // (PORT_WITH_HYSTERESIS | PORT_PS_DOWN_ENABLE | PORT_PS_UP_ENABLE)

	// start XBAR1 clocks
	// refer to Ref Manual, page 1147&1148, section 14.7.23
	// CCM Clock Gating Register 2 (CCM_CCGR5) bits 23..22
	CCM->CCGR2 |= 0x00C00000;

	// iomuxc_snvs_gpr_clk_enable
	// refer to Ref Manual, page 1148&1149, section 14.7.24
	// CCM Clock Gating Register 2 (CCM_CCGR3) bits 31...30
	CCM->CCGR3 |= 0xC0000000;

	// iomuxc_snvs_clk_enable
	// refer to Ref Manual, page 1147&1148, section 14.7.23
	// CCM Clock Gating Register 2 (CCM_CCGR2) bits 5...4
	CCM->CCGR2 |= 0x0030;

	// iomuxc_gpr_clk_enable (bits 5..4) and iomuxc_clk_enable (bits 3..2)
	// refer to Ref Manual, page 1149&1150, section 14.7.25
	// CCM Clock Gating Register 4 bits 5...4 & 3..2
	CCM->CCGR4 |= 0x003C;

    XBARA1->SEL1 = 0x0400; // set Select 3 output to match input Select 4  This is what will be triggering the DMA action
    XBARA1->SEL3 = 0x04;   // set Select 6 output to match input Select 4  This is a mirror of what is being read on GPIO_SD_B0_00


	IOMUXC_GPR->GPR6 &= ~IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_4_MASK;         // ensure XBAR_INOUT04 is an input Arduino pin  J17-6
	IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_00] = ALT3;     // select XBAR_INOUT04 on GPIO3_IO12 (GPIO_SD_B0_00) alt. function 3
	IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_00] = CTL_PAD_INPUT;

	IOMUXC_GPR->GPR6 |= IOMUXC_GPR_GPR6_IOMUXC_XBAR_DIR_SEL_6_MASK;         // set XBAR_INOUT06 as an output Arduino pin  J17-4

	/**
	 * @note big NOTE here, the next two registers are buried in the manual
	 * in sections:
	 *      11.6.385 XBAR1_IN04_SELECT_INPUT DAISY
	 *      11.6.387 XBAR1_IN06_SELECT_INPUT DAISY
	 * starting near Page 901 of RM spec
	 * these two MUX operations need to select the PADs that were using.
	 */
	*((uint32_t *)(IOMUXC_BASE+0x614)) = 0x1;
	*((uint32_t *)(IOMUXC_BASE+0x61C)) = 0x1;

	IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_02] = ALT3;     // select XBAR_INOUT06 on GPIO3_IO12 (GPIO_SD_B0_00) alt. function 3
	IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_02] = CTL_PAD;

	// alternate CS pin Arduino pin  J17-5
	IOMUXC->SW_MUX_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_03] = ALT5;     // select GPIO output on GPIO3_IO15 (GPIO_SD_B0_03) alt. function 5
	IOMUXC->SW_PAD_CTL_PAD[kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B0_03] = CTL_PAD;

    GPIO3->GDIR |= 0xC000;
    GPIO3->ICR1 = 0x03000000; // ICR12 falling edge

	XBARA1->SEL2 = 0x0400; // set Select 5 output to match input Select 4
    XBARA1->CTRL1 |= 0x0900; // DMA Enable for XBAR_OUT3 with Active falling edges, no IRQ

}

/**
 *
 */
void TxTest()
{
	uint8_t idx;
	volatile uint32_t readValue;
#define START ('0')
#define END ('9'+1)

	if(tl_PeripheralInitFlag | tl_ClocksInitFlag)
	{
		InitClocks();
		InitSPI3Peripheral();
	}
	for(idx=START; idx < END; idx++ )
	{
		LPSPI3->TDR = idx;
		while(LPSPI3->RSR & 0x2)
			;
		readValue = LPSPI3->RDR;
		if( readValue != idx)
			break;
	}
}

#define REMOVE_CONT (1)
static uint8_t firstTimeFlag = 1;
static uint8_t volatile passRxSetupFlag = 0;
static uint8_t volatile passTxSetupFlag = 0;
static uint8_t volatile combineDMATriggerFlag = 1;
static uint8_t volatile triggerTxERQ = 1;
static uint8_t volatile triggerRxERQ = 1;

void DMA0_DMA16_DriverIRQHandler()
{
	DMA_irq();
}

void DMA_irq(void)
{
	DMA_Type *dmaBASE = DMA0;
	static uint32_t irqDmaCnt = 0;
	dmaBASE->INT |= 1<<0; // clear IRQ0

	irqDmaCnt++;
}

/**
 * This function follows the operations that the evkmimxrt1060_lpspi_edma_b2b_transfer_master SDK
 * example perform.
 * This method does remove the scatter/gather method so a CS is present on each byte
 */
void RestSPI3Peripheral(uint8_t *ptrTxBuffer,uint8_t *ptrRxBuffer)
{
	edma_tcd_t *rxTCD;
	edma_tcd_t *txTCD;
	DMA_Type *dmaBASE = DMA0;
	LPSPI_Type *spiBASE = LPSPI3;

	spiBASE->CR &= ~LPSPI_CR_MEN_MASK ; // disable LPSPI3
	spiBASE->CR |= (1<<FLUSH_TX_FIFO_SHIFT) | (1<<FLUSH_RX_FIFO_SHIFT); // flush FIFOs
	spiBASE->SR = kLPSPI_AllStatusFlag; // set bits to clear them
	spiBASE->IER &= ~kLPSPI_AllInterruptEnable; // clear all interrupts
	spiBASE->DER &= ~(LPSPI_DER_RDDE_MASK|LPSPI_DER_TDDE_MASK); // disable DMA

	spiBASE->FCR = 0; // clear watermark counts, DMA is fast enough to keep up

    /* Transfers will stall when transmit FIFO is empty or receive FIFO is full. */
	spiBASE->CFGR1 &= (~LPSPI_CFGR1_NOSTALL_MASK);

    /* Enable module for following configuration of TCR to take effect. */
	spiBASE->CR |= LPSPI_CR_MEN_MASK ; // enable LPSPI3

    /* For DMA transfer , we'd better not masked the transmit data and receive data in TCR since the transfer flow is
     * hard to controlled by software. */
	spiBASE->TCR & ~(LPSPI_TCR_CONT_MASK | LPSPI_TCR_CONTC_MASK /*| LPSPI_TCR_BYSW_MASK*/ | LPSPI_TCR_PCS_MASK);
	spiBASE->TCR |= ( 0xC0000000/* | LPSPI_TCR_CONT_MASK | LPSPI_TCR_BYSW_MASK*/ ) ;

    /* Configure rx EDMA transfer channel 0*/
	rxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[0];
	EDMATcdReset(rxTCD);
	rxTCD->SADDR = (uint32_t)&(LPSPI3->RDR); // our source address is the SPI3 Rx register
	rxTCD->SOFF = 0;            // source address offset set to zero as it does not change
	rxTCD->DADDR = byteBuffer; // where the RX data will be placed
	rxTCD->DOFF = 1;            // each destination address write will increment by 1 byte
	rxTCD->ATTR = 0x0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
	rxTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
	rxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	rxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation

	// in our case will will trigger a IRQ when the major cycle count completes
	rxTCD->CSR |= DMA_CSR_INTMAJOR_MASK;

	/* Configure Tx EDMA transfer, channel 1 */
	txTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[1];
	EDMATcdReset(txTCD);

	txTCD->SADDR = ptrTxBuffer;  // our source buffer address to start reading from
	txTCD->SOFF = 1;            // source address offset set to 1 to increment by one byte per transfer
	txTCD->DADDR = (uint32_t)&(LPSPI3->TDR); // where the TX data will be placed SPI3 Tx Register
	txTCD->DOFF = 0;            // each destination address is a hardware registers, so we will not increment it
	txTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
	txTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
	txTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	txTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	txTCD->DLAST_SGA = 0;

	__disable_interrupt();

	dmaBASE->SERQ = DMA_SERQ_SERQ(1); // eDMA starts transfer TX channel
	dmaBASE->SERQ = DMA_SERQ_SERQ(0); // eDMA starts transfer RX channel


	spiBASE->DER |= (LPSPI_DER_TDDE_MASK /*!< Transmit data DMA enable */ | LPSPI_DER_RDDE_MASK /*!< Receive data DMA enable */ );
	__enable_interrupt();

	NVIC_EnableIRQ(0);
}

/**
 * Configure SPI3 DMA once and so that on every transfer the buffer pointer return
 */
void MultiLoopSPI3Peripheral(uint8_t *ptrTxBuffer,uint8_t *ptrRxBuffer)
{
	static uint8_t firstTimeFlag = 1;

	edma_tcd_t *rxTCD;
	edma_tcd_t *txTCD;
	DMA_Type *dmaBASE = DMA0;
	LPSPI_Type *spiBASE = LPSPI3;

	if( firstTimeFlag )
	{
		uint16_t idx;

		if(tl_PeripheralInitFlag | tl_ClocksInitFlag)
		{
			InitClocks();
			InitSPI3Peripheral();
		}

		for(idx=0;idx<BUFFER_SIZE;idx++)
		{
			spi3_Tx_Buffer[idx] = idx;
			spi3_Rx_Buffer[idx] = 0xA5;
		}

		spi3_Tx_Buffer[0] =  0x40  | 0x01; // read command to ADC


		firstTimeFlag = 0;
		ConfigureSPI3Peripheral();

		ConfigureDMAMux0();
		ConfigureDMAMux1();


		dmaBASE->SERQ = DMA_SERQ_SERQ(0); // eDMA starts transfer RX channel
		dmaBASE->SERQ = DMA_SERQ_SERQ(1); // eDMA starts transfer TX channel


		spiBASE->DER |= (LPSPI_DER_TDDE_MASK /*!< Transmit data DMA enable */ | LPSPI_DER_RDDE_MASK /*!< Receive data DMA enable */ );

		NVIC_EnableIRQ(0);
	}
	else
	{
		dmaBASE->SERQ = DMA_SERQ_SERQ(0); // eDMA starts transfer RX channel
		dmaBASE->SERQ = DMA_SERQ_SERQ(1); // eDMA starts transfer TX channel
	}

}

/**
 * This procedure is the operation that is provided by the SDK example evkmimxrt1060_lpspi_edma_b2b_transfer_master
 * This process required complete resetting of all registers before it can be triggered to run again.
 * This method can not support a continued program and forget method.
 */
void SingleDMATxTest()
{
	uint16_t idx;

	if(tl_PeripheralInitFlag | tl_ClocksInitFlag)
	{
		InitClocks();
		InitSPI3Peripheral();
	}

	for(idx=0;idx<BUFFER_SIZE;idx++)
	{
		spi3_Tx_Buffer[idx] = idx;
		spi3_Rx_Buffer[idx] = 0xA5;
	}

	spi3_Tx_Buffer[0] =  0x40  | 0x01; // read command to ADC

	RestSPI3Peripheral(spi3_Tx_Buffer,spi3_Rx_Buffer);
}

/**
 * Modify the SPI DMA operations to now only need a setup and allow it to run
 * on each trigger
 */
void MultiDMATxTest()
{
	MultiLoopSPI3Peripheral(spi3_Tx_Buffer,spi3_Rx_Buffer);
}

/**
 *
 */
void XBARTest()
{
	if(tl_PeripheralInitFlag | tl_ClocksInitFlag)
	{
		InitClocks();
		InitSPI3Peripheral();
	}

	InitXBAR();

	ConfigureDMAMux3();
    ConfigureDMAMux2();


}

/**
 *
 */
void XBARWithSPIDMA()
{
	uint16_t idx;

	if(tl_PeripheralInitFlag | tl_ClocksInitFlag)
	{
		InitClocks();
		InitSPI3Peripheral();

		for(idx=0;idx<BUFFER_SIZE;idx++)
		{
			spi3_Tx_Buffer[idx] = idx;
			spi3_Rx_Buffer[idx] = 0xA5;
		}
		spi3_Tx_Buffer[0] =  0x40  | 0x01; // read command to ADC
	}

	ConfigureSPI3Peripheral();
	InitXBAR();
    ConfigureDMAMux5();
    ConfigureDMAMux6();
    ConfigureDMAMux7();
    ConfigureDMAMux8();
}

void XBARWithSPIDMANoCS()
{
	uint16_t idx;

	if(tl_PeripheralInitFlag | tl_ClocksInitFlag)
	{
		InitClocks();
		InitSPI3Peripheral();

		for(idx=0;idx<BUFFER_SIZE;idx++)
		{
			spi3_Tx_Buffer[idx] = idx;
			spi3_Rx_Buffer[idx] = 0xA5;
		}
		spi3_Tx_Buffer[0] =  0x40  | 0x01; // read command to ADC
	}

	ConfigureSPI3Peripheral();
	InitXBAR();
    ConfigureDMAMux9();
    ConfigureDMAMux10();
    ConfigureDMAMux12();
    ConfigureDMAMux11();

}
