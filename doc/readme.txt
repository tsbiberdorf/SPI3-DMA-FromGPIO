Overview
========
The purpose of this project is to establish a LPSPI3 DMA transfer of 25 bytes 
to be triggered by a GPIO input falling edge.

It is intended that the user of this project have a logic analyzer attached
the following pins:
J23-23 MOSI
J23-22 CS
J23-21 CLK
J23-7  MISO

MISO can be shorted to MOSI for verification of data


Toolchain supported
===================
- MCUXpresso  11.4.0

Hardware requirements
=====================
- Mini/micro USB cable
- EVK-MIMXRT1060 board
- Personal Computer

Board settings
==============
No special settings are required.

Prepare the Demo
================
1.  Connect a USB cable between the host PC and the OpenSDA USB port on the target board. 
2.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
4.  Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
the UART connection to the EVKB board should open with the following text message:

SPI3 DMA from GPIO test


From this point enter the following single character commands:
  1 : initialize clocks and peripherals
  2 : simple LPSPI3 Tx test to transmit ascii characters '0' to '9'
 