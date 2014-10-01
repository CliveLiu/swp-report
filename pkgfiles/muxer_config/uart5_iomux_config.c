/*
 * Copyright (C) 2012, [Your Company Here] All Rights Reserved.
 * IT IS EXPECTED THAT THIS TEXT BE REPLACED WITH THE BOARD SOFTWARE
 * PROVIDER'S COPYRIGHT INFORMATION. THIS TEXT WILL BE DISPLAYED AT 
 * THE TOP OF ALL SOURCE FILES GENERATED FOR THIS BOARD DESIGN.
*/

// File: uart5_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.3
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for uart5 module.
void uart5_iomux_config(void)
{
    // Config uart5.UART5_RX_DATA to pad KEY_ROW1(U6)
    // HW_IOMUXC_SW_MUX_CTL_PAD_KEY_ROW1_WR(0x00000004);
    // HW_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_WR(0x0001B0B0);
    // HW_IOMUXC_UART5_UART_RX_DATA_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_KEY_ROW1(0x020E025C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ecspi1 signal: ECSPI1_SS0
    //     ALT1 (1) - Select instance: enet signal: ENET_COL
    //     ALT2 (2) - Select instance: audmux signal: AUD5_RXD
    //     ALT3 (3) - Select instance: kpp signal: KEY_ROW1
    //     ALT4 (4) - Select instance: uart5 signal: UART5_RX_DATA
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO09
    //     ALT6 (6) - Select instance: usdhc2 signal: SD2_VSELECT
    HW_IOMUXC_SW_MUX_CTL_PAD_KEY_ROW1_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_ROW1_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_ROW1_MUX_MODE_V(ALT4));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1(0x020E0644)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1_SRE_V(SLOW));
    // Pad KEY_ROW1 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_UART5_UART_RX_DATA_SELECT_INPUT(0x020E091C)
    //   DAISY [1:0] - Input Select (DAISY) Field Reset: CSI0_DATA14_ALT3
    //                 Selecting Pads Involved in Daisy Chain.
    //     CSI0_DATA14_ALT3 (0) - Select signal uart5 UART5_TX_DATA as input from pad CSI0_DATA14(ALT3).
    //     CSI0_DATA15_ALT3 (1) - Select signal uart5 UART5_RX_DATA as input from pad CSI0_DATA15(ALT3).
    //     KEY_COL1_ALT4 (2) - Select signal uart5 UART5_TX_DATA as input from pad KEY_COL1(ALT4).
    //     KEY_ROW1_ALT4 (3) - Select signal uart5 UART5_RX_DATA as input from pad KEY_ROW1(ALT4).
    HW_IOMUXC_UART5_UART_RX_DATA_SELECT_INPUT_WR(
            BF_IOMUXC_UART5_UART_RX_DATA_SELECT_INPUT_DAISY_V(CSI0_DATA14_ALT3));

    // Config uart5.UART5_TX_DATA to pad KEY_COL1(U7)
    // HW_IOMUXC_SW_MUX_CTL_PAD_KEY_COL1_WR(0x00000004);
    // HW_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_WR(0x0001B0B0);
    // HW_IOMUXC_UART5_UART_RX_DATA_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_KEY_COL1(0x020E0248)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ecspi1 signal: ECSPI1_MISO
    //     ALT1 (1) - Select instance: enet signal: ENET_MDIO
    //     ALT2 (2) - Select instance: audmux signal: AUD5_TXFS
    //     ALT3 (3) - Select instance: kpp signal: KEY_COL1
    //     ALT4 (4) - Select instance: uart5 signal: UART5_TX_DATA
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO08
    //     ALT6 (6) - Select instance: usdhc1 signal: SD1_VSELECT
    HW_IOMUXC_SW_MUX_CTL_PAD_KEY_COL1_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_COL1_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_COL1_MUX_MODE_V(ALT4));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_KEY_COL1(0x020E0630)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL1_SRE_V(SLOW));
    // Pad KEY_COL1 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_UART5_UART_RX_DATA_SELECT_INPUT(0x020E091C)
    //   DAISY [1:0] - Input Select (DAISY) Field Reset: CSI0_DATA14_ALT3
    //                 Selecting Pads Involved in Daisy Chain.
    //     CSI0_DATA14_ALT3 (0) - Select signal uart5 UART5_TX_DATA as input from pad CSI0_DATA14(ALT3).
    //     CSI0_DATA15_ALT3 (1) - Select signal uart5 UART5_RX_DATA as input from pad CSI0_DATA15(ALT3).
    //     KEY_COL1_ALT4 (2) - Select signal uart5 UART5_TX_DATA as input from pad KEY_COL1(ALT4).
    //     KEY_ROW1_ALT4 (3) - Select signal uart5 UART5_RX_DATA as input from pad KEY_ROW1(ALT4).
    HW_IOMUXC_UART5_UART_RX_DATA_SELECT_INPUT_WR(
            BF_IOMUXC_UART5_UART_RX_DATA_SELECT_INPUT_DAISY_V(CSI0_DATA14_ALT3));
}
