/*
 * Copyright (c) 2013 - 2015, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/


/*******************************************************************************
 * Prototypes
 ******************************************************************************/
extern void InitClocks();
extern void InitSPI3Peripheral();
extern void TxTest();
extern void SingleDMATxTest();

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief Main function
 */
int main(void)
{
    char ch;

    /* Init board hardware. */
    BOARD_ConfigMPU();
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();

    PRINTF("SPI3 DMA from GPIO test\r\n");


    while (1)
    {
        ch = GETCHAR();
        PUTCHAR(ch);

        switch(ch)
        {
        case '1':
        	// initialize all clocks needed in this project
        	InitClocks();
        	InitSPI3Peripheral();
        	break;
        case '2':
        	// simple test to transmit ascii '0' to '9' out SPI3 port
        	TxTest();
        	break;
        case '3':
        	// trigger 25 byte DMA transfer with CS on each byte
        	SingleDMATxTest();
        	break;

        }
    }
}
