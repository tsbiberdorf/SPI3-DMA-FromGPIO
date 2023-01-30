/*
 * spi3DMA.c
 *
 *  Created on: Jan 18, 2023
 *      Author: TBiberdorf
 */

#include <stdint.h>
//#include "config.h"
#include "spi3DMA.h"


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

#define BUFFER_SIZE (25)
#define TRANSFER_SIZE     25U     /* Transfer dataSize */

#define LPSPI_MASTER_DMA_RX_CHANNEL (0)
#define LPSPI_MASTER_DMA_TX_CHANNEL (1)

#define TRIGGER_DMA_TX_CHANNEL (2)
#define TRIGGER_DMA_RX_CHANNEL (3)

uint8_t spi3_Rx_Buffer[BUFFER_SIZE];
uint8_t spi3_Tx_Buffer[BUFFER_SIZE];
//static uint8_t spi3_Tx_Buffer[BUFFER_SIZE] = {0x41,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf,0x10,0x12,0x13,0x14,0x15,0x16,0x17,0x18};

void InitClocks()
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
}

void InitSPI3Peripheral()
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

}

void TxTest()
{
	uint8_t idx;
	volatile uint32_t readValue;
#define START ('0')
#define END ('9'+1)
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

//	DMAMUX->CHCFG[TRIGGER_DMA_TX_CHANNEL] = 0x0;
//	DMAMUX->CHCFG[TRIGGER_DMA_TX_CHANNEL] |= DMAMUX_CHCFG_ENBL_MASK; // enable
//
//	DMAMUX->CHCFG[TRIGGER_DMA_RX_CHANNEL] = 0x0;
//	DMAMUX->CHCFG[TRIGGER_DMA_RX_CHANNEL] |= DMAMUX_CHCFG_ENBL_MASK; // enable


}

#define REMOVE_CONT (1)
static uint8_t firstTimeFlag = 1;
static uint8_t volatile passRxSetupFlag = 0;
static uint8_t volatile passTxSetupFlag = 0;
static uint8_t volatile combineDMATriggerFlag = 1;
static uint8_t volatile triggerTxERQ = 1;
static uint8_t volatile triggerRxERQ = 1;

void RestartSPI3Peripheral(uint8_t *ptrTxBuffer,uint8_t *ptrRxBuffer,uint8_t CSCont, uint8_t HardStartFlag)
{
	edma_tcd_t *rxTCD;
	edma_tcd_t *txTCD;
	edma_tcd_t *triggerTxTCD;
	edma_tcd_t *triggerRxTCD;
	DMA_Type *dmaBASE = DMA0;
	LPSPI_Type *spiBASE = LPSPI3;
	static uint32_t trasmitCommand;
	static uint8_t triggerTxDMA = 0x2; // bit setting to enable Request Register for Tx DMA
	static uint8_t triggerRxDMA = 0x1; // bit setting to enable Request Register for Rx DMA
	static volatile edma_tcd_t softwareTCD_pcsContinuous; // store in RAM

	if(HardStartFlag)
	{
		// always force the full setup
		firstTimeFlag = 1;
	}
	if(firstTimeFlag)
	{
		firstTimeFlag = 0;


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
		spiBASE->TCR & ~(LPSPI_TCR_CONT_MASK | LPSPI_TCR_CONTC_MASK | LPSPI_TCR_BYSW_MASK | LPSPI_TCR_PCS_MASK);

		if( CSCont )
		{
			spiBASE->TCR |= (LPSPI_TCR_CONT_MASK | LPSPI_TCR_BYSW_MASK ) ;

			EDMATcdReset(&softwareTCD_pcsContinuous);
			trasmitCommand = LPSPI3->TCR & ~(LPSPI_TCR_CONTC_MASK | LPSPI_TCR_CONT_MASK);
			softwareTCD_pcsContinuous.SADDR = (uint32_t)(&trasmitCommand);
			softwareTCD_pcsContinuous.SOFF = 0;                          // source address offset set to 4 bytes
			softwareTCD_pcsContinuous.DADDR = (uint32_t)&(LPSPI3->TCR);    // source address offset set to zero as it does not change
			softwareTCD_pcsContinuous.DOFF = 0;                      // each destination address write will increment by 1 byte
			softwareTCD_pcsContinuous.ATTR = DMA_ATTR_SSIZE(2) | DMA_ATTR_DSIZE(2); // transfer size of 32 bits (002b => 32-bit) refer to page 134 of RM spec.
			softwareTCD_pcsContinuous.NBYTES = 4;                    // number of bytes in each minor loop transfer.
			softwareTCD_pcsContinuous.CITER = 1;                     // number of loops to in the complete instruction to ADC
			softwareTCD_pcsContinuous.BITER = 1;                     // number of loops to in the complete instruction to ADC
		}
		else
		{
			spiBASE->TCR |= ( LPSPI_TCR_BYSW_MASK ) ;
		}

		/* Configure rx EDMA transfer channel 0*/
		rxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[LPSPI_MASTER_DMA_RX_CHANNEL];
		EDMATcdReset(rxTCD);
		rxTCD->SADDR = (uint32_t)&(LPSPI3->RDR)+3; // our source address is the SPI3 Rx register
		rxTCD->SOFF = 0;            // source address offset set to zero as it does not change
		rxTCD->DADDR = ptrRxBuffer; // where the RX data will be placed
		rxTCD->DOFF = 1;            // each destination address write will increment by 1 byte
		rxTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
		rxTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
		rxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
		rxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
		rxTCD->DLAST_SGA = (BUFFER_SIZE*-1); // subtract destination from beginning

		// in our case will will trigger a IRQ when the major cycle count completes
		rxTCD->CSR |= DMA_CSR_INTMAJOR_MASK;

		/* Configure Tx EDMA transfer, channel 1 */
		txTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[LPSPI_MASTER_DMA_TX_CHANNEL];
		EDMATcdReset(txTCD);

		txTCD->SADDR = ptrTxBuffer;  // our source buffer address to start reading from
		txTCD->SOFF = 1;            // source address offset set to 1 to increment by one byte per transfer
		txTCD->SLAST = (BUFFER_SIZE*-1); // subtract destination from beginning
		txTCD->DADDR = (uint32_t)&(LPSPI3->TDR) + 3; // where the TX data will be placed SPI3 Tx Register
		txTCD->DOFF = 0;            // each destination address is a hardware registers, so we will not increment it
		txTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
		txTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
		txTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
		txTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation

		if( CSCont )
		{
			txTCD->DLAST_SGA = (uint32_t)&softwareTCD_pcsContinuous;
		}
		else
		{
			txTCD->DLAST_SGA = 0;
		}

		txTCD->CSR = 0;

		/* Configure TCD to set the Tx ERQ so as to start a Tx transfer, channel 2 */
		triggerTxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[TRIGGER_DMA_TX_CHANNEL];
		EDMATcdReset(triggerTxTCD);

		triggerTxTCD->SADDR = triggerTxDMA;  // our source buffer address to start reading from
		triggerTxTCD->SOFF = 0;              // source address offset set to 1 to increment by one byte per transfer
		triggerTxTCD->SLAST = 0;             // subtract destination from beginning
		triggerTxTCD->DADDR = (uint32_t )&(dmaBASE->SERQ); // DMA0->CERQ register
		triggerTxTCD->DOFF = 0;            // each destination address is a hardware registers, so we will not increment it
		triggerTxTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
		triggerTxTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
		triggerTxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
		triggerTxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
		triggerTxTCD->DLAST_SGA = 0;
		triggerTxTCD->CSR = (TRIGGER_DMA_RX_CHANNEL<<8)| 1<<5;

		/* Configure TCD to set the Tx ERQ so as to start a Tx transfer, channel 2 */
		triggerRxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[TRIGGER_DMA_RX_CHANNEL];
		EDMATcdReset(triggerRxTCD);

		triggerRxTCD->SADDR = triggerRxDMA;  // our source buffer address to start reading from
		triggerRxTCD->SOFF = 0;              // source address offset set to 1 to increment by one byte per transfer
		triggerRxTCD->SLAST = 0;             // subtract destination from beginning
		triggerRxTCD->DADDR = (uint32_t )&(dmaBASE->SERQ); // DMA0->CERQ register
		triggerRxTCD->DOFF = 0;            // each destination address is a hardware registers, so we will not increment it
		triggerRxTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
		triggerRxTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
		triggerRxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
		triggerRxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
		triggerRxTCD->DLAST_SGA = 0;
		triggerRxTCD->CSR = 0;

		//	NVIC_EnableIRQ(DMA0_DMA16_IRQn);
		//	NVIC_EnableIRQ(DMA1_DMA17_IRQn);


		/*
        Before call EDMA_TcdSetTransferConfig or EDMA_SetTransferConfig,
        user must call EDMA_TcdReset or EDMA_ResetChannel which will set
        DREQ, so must use "|" or "&" rather than "=".

        Clear the DREQ bit because scatter gather has been enabled, so the
        previous transfer is not the last transfer, and channel request should
        be enabled at the next transfer(the next TCD).
		 */

		if( CSCont )
		{
			txTCD->CSR =  (txTCD->CSR | (uint16_t)DMA_CSR_ESG_MASK) & ~(uint16_t)DMA_CSR_DREQ_MASK;
		}

		dmaBASE->SERQ = DMA_SERQ_SERQ(1); // eDMA starts transfer TX channel
		dmaBASE->SERQ = DMA_SERQ_SERQ(0); // eDMA starts transfer RX channel


		spiBASE->DER |= (LPSPI_DER_TDDE_MASK /*!< Transmit data DMA enable */ | LPSPI_DER_RDDE_MASK /*!< Receive data DMA enable */ );
	}
	else
	{
		/* Configure rx EDMA transfer channel 0*/
		if(passRxSetupFlag)
		{
			rxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[0];
			EDMATcdReset(rxTCD);
			rxTCD->SADDR = (uint32_t)&(LPSPI3->RDR)+3; // our source address is the SPI3 Rx register
			rxTCD->SOFF = 0;            // source address offset set to zero as it does not change
			rxTCD->DADDR = ptrRxBuffer; // where the RX data will be placed
			rxTCD->DOFF = 1;            // each destination address write will increment by 1 byte
			rxTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
			rxTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
			rxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
			rxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
			rxTCD->DLAST_SGA = (BUFFER_SIZE*-1); // subtract destination from beginning

			// in our case will will trigger a IRQ when the major cycle count completes
			rxTCD->CSR |= DMA_CSR_INTMAJOR_MASK;
		}
		if(passTxSetupFlag)
		{
			/* Configure Tx EDMA transfer, channel 1 */
			txTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[1];
			EDMATcdReset(txTCD);

			txTCD->SADDR = ptrTxBuffer;  // our source buffer address to start reading from
			txTCD->SOFF = 1;            // source address offset set to 1 to increment by one byte per transfer
			txTCD->SLAST = (BUFFER_SIZE*-1); // subtract destination from beginning
			txTCD->DADDR = (uint32_t)&(LPSPI3->TDR) + 3; // where the TX data will be placed SPI3 Tx Register
			txTCD->DOFF = 0;            // each destination address is a hardware registers, so we will not increment it
			txTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
			txTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
			txTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
			txTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
			txTCD->DLAST_SGA = 0;
		}

		if(combineDMATriggerFlag)
		{
			if( triggerTxERQ)
			dmaBASE->SERQ = DMA_SERQ_SERQ(1); // eDMA starts transfer TX channel
			if( triggerRxERQ)
			dmaBASE->SERQ = DMA_SERQ_SERQ(0); // eDMA starts transfer RX channel
		}
		else
		{
			dmaBASE->SERQ = (DMA_SERQ_SERQ(2)  ); // eDMA starts setting the Tx/Rx EIR registers
		}

//		dmaBASE->SERQ = (DMA_SERQ_SERQ(1) | DMA_SERQ_SERQ(0) ); // eDMA starts transfer TX channel
//		dmaBASE->SERQ = DMA_SERQ_SERQ(0); // eDMA starts transfer RX channel


//		spiBASE->DER |= (LPSPI_DER_TDDE_MASK /*!< Transmit data DMA enable */ | LPSPI_DER_RDDE_MASK /*!< Receive data DMA enable */ );

	}
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
 * This method uses a scatter/gather method so that the SPI3 CS0 is active during the full transfer.
 */
void RestSPI3Peripheral(uint8_t *ptrTxBuffer,uint8_t *ptrRxBuffer)
{
	edma_tcd_t *rxTCD;
	edma_tcd_t *txTCD;
	DMA_Type *dmaBASE = DMA0;
	LPSPI_Type *spiBASE = LPSPI3;
	static uint32_t trasmitCommand;
	static volatile edma_tcd_t softwareTCD_pcsContinuous; // store in RAM

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
	spiBASE->TCR & ~(LPSPI_TCR_CONT_MASK | LPSPI_TCR_CONTC_MASK | LPSPI_TCR_BYSW_MASK | LPSPI_TCR_PCS_MASK);
	spiBASE->TCR |= ( 0xC0000000 | LPSPI_TCR_CONT_MASK /*| LPSPI_TCR_BYSW_MASK*/ ) ;

    /* Configure rx EDMA transfer channel 0*/
	rxTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[0];
	EDMATcdReset(rxTCD);
	rxTCD->SADDR = (uint32_t)&(LPSPI3->RDR); // our source address is the SPI3 Rx register
	rxTCD->SOFF = 0;            // source address offset set to zero as it does not change
	rxTCD->DADDR = ptrRxBuffer; // where the RX data will be placed
	rxTCD->DOFF = 1;            // each destination address write will increment by 1 byte
	rxTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
	rxTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
	rxTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	rxTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation

	// in our case will will trigger a IRQ when the major cycle count completes
	rxTCD->CSR |= DMA_CSR_INTMAJOR_MASK;

	/* Configure Tx EDMA transfer, channel 1 */
	txTCD = (edma_tcd_t *)(uint32_t)&dmaBASE->TCD[1];
	EDMATcdReset(txTCD);

	EDMATcdReset(&softwareTCD_pcsContinuous);
	trasmitCommand = LPSPI3->TCR & ~(LPSPI_TCR_CONTC_MASK | LPSPI_TCR_CONT_MASK);
	softwareTCD_pcsContinuous.SADDR = (uint32_t)(&trasmitCommand);
	softwareTCD_pcsContinuous.SOFF = 0;                          // source address offset set to 4 bytes
	softwareTCD_pcsContinuous.DADDR = (uint32_t)&(LPSPI3->TCR);    // source address offset set to zero as it does not change
	softwareTCD_pcsContinuous.DOFF = 0;                      // each destination address write will increment by 1 byte
	softwareTCD_pcsContinuous.ATTR = DMA_ATTR_SSIZE(2) | DMA_ATTR_DSIZE(2); // transfer size of 32 bits (002b => 32-bit) refer to page 134 of RM spec.
	softwareTCD_pcsContinuous.NBYTES = 4;                    // number of bytes in each minor loop transfer.
	softwareTCD_pcsContinuous.CITER = 1;                     // number of loops to in the complete instruction to ADC
	softwareTCD_pcsContinuous.BITER = 1;                     // number of loops to in the complete instruction to ADC

	txTCD->SADDR = ptrTxBuffer;  // our source buffer address to start reading from
	txTCD->SOFF = 1;            // source address offset set to 1 to increment by one byte per transfer
	txTCD->DADDR = (uint32_t)&(LPSPI3->TDR); // where the TX data will be placed SPI3 Tx Register
	txTCD->DOFF = 0;            // each destination address is a hardware registers, so we will not increment it
	txTCD->ATTR = 0;            // transfer size of 1 byte (000b => 8-bit) refer to page 134 of RM spec.
	txTCD->NBYTES = 1;           // number of bytes in each minor loop transfer.
	txTCD->CITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	txTCD->BITER = BUFFER_SIZE;  // number of bytes(loops) in the complete one ADC read operation
	txTCD->DLAST_SGA = (uint32_t)&softwareTCD_pcsContinuous;



    /*
        Before call EDMA_TcdSetTransferConfig or EDMA_SetTransferConfig,
        user must call EDMA_TcdReset or EDMA_ResetChannel which will set
       DREQ, so must use "|" or "&" rather than "=".

        Clear the DREQ bit because scatter gather has been enabled, so the
        previous transfer is not the last transfer, and channel request should
        be enabled at the next transfer(the next TCD).
    */

	txTCD->CSR =  (txTCD->CSR | (uint16_t)DMA_CSR_ESG_MASK) & ~(uint16_t)DMA_CSR_DREQ_MASK;

	dmaBASE->SERQ = DMA_SERQ_SERQ(1); // eDMA starts transfer TX channel
	dmaBASE->SERQ = DMA_SERQ_SERQ(0); // eDMA starts transfer RX channel


	spiBASE->DER |= (LPSPI_DER_TDDE_MASK /*!< Transmit data DMA enable */ | LPSPI_DER_RDDE_MASK /*!< Receive data DMA enable */ );
}

/**
 * This procedure is the operation that is provided by the SDK example evkmimxrt1060_lpspi_edma_b2b_transfer_master
 * This process required complete resetting of all registers before it can be triggered to run again.
 * This method can not support a continued program and forget method.
 */
void SingleDMATxTest()
{
	uint16_t idx;
	for(idx=0;idx<BUFFER_SIZE;idx++)
	{
		spi3_Tx_Buffer[idx] = idx;
		spi3_Rx_Buffer[idx] = 0x0;
	}

	spi3_Tx_Buffer[0] =  0x40  | 0x01; // read command to ADC

	InitDMAandEDMA();
	RestSPI3Peripheral(spi3_Tx_Buffer,spi3_Rx_Buffer);

}
