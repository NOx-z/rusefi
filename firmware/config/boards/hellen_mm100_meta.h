#pragma once

#define MM100_IGN1 C13
#define MM100_IGN2 E5
#define MM100_IGN3 E4
#define MM100_IGN4 E3
#define MM100_IGN5 E2
#define MM100_IGN6 B8
#define MM100_IGN7 B9
#define MM100_IGN8 E6

#define MM100_INJ1 D3
#define MM100_COATED_INJ1 D0
#define MM100_INJ2 A9
#define MM100_INJ3 D11
#define MM100_INJ4 D10
#define MM100_INJ5 D2
#define MM100_INJ6 A8
#define MM100_INJ7 D15
#define MM100_INJ8 D12

#define MM100_OUT_PWM1 D13
#define MM100_OUT_PWM2 C6
#define MM100_OUT_PWM3 C7
#define MM100_OUT_PWM4 C8
#define MM100_OUT_PWM5 C9
#define MM100_OUT_PWM6 D14


#define MM100_IN_CRANK B1
#define MM100_IN_CRANK_ANALOG EFI_ADC_9
#define MM100_IN_CAM A6
#define MM100_IN_CAM_ANALOG EFI_ADC_6
#define MM100_IN_VSS E11
#define MM100_IN_TPS A4
#define MM100_IN_TPS_ANALOG EFI_ADC_4
#define MM100_IN_PPS A3
#define MM100_IN_PPS_ANALOG EFI_ADC_3
#define MM100_IN_IAT C3
#define MM100_IN_IAT_ANALOG EFI_ADC_13
#define MM100_IN_CLT C2
#define MM100_IN_CLT_ANALOG EFI_ADC_12
#define MM100_IN_O2S A0
#define MM100_IN_O2S_ANALOG EFI_ADC_0
#define MM100_IN_O2S2 A1
#define MM100_IN_O2S2_ANALOG EFI_ADC_1
#define MM100_IN_MAP1 C0
#define MM100_IN_MAP1_ANALOG EFI_ADC_10
#define MM100_IN_MAP2 C1
#define MM100_IN_MAP2_ANALOG EFI_ADC_11
#define MM100_IN_AUX1 B0
#define MM100_IN_AUX1_ANALOG EFI_ADC_8
#define MM100_IN_AUX2 C4
#define MM100_IN_AUX2_ANALOG EFI_ADC_14
#define MM100_IN_AUX3 A7
#define MM100_COATED_IN_AUX3 D1
#define MM100_IN_AUX3_ANALOG EFI_ADC_7
//MM100_COATED AUX3 is digital input only
#define MM100_IN_AUX4 C5
#define MM100_IN_AUX4_ANALOG EFI_ADC_15
//KNOCK not defined

#define MM100_IN_D1 E12
#define MM100_IN_D2 E13
#define MM100_IN_D3 E14
#define MM100_IN_D4 E15

#define MM100_IN_VBATT EFI_ADC_5

#define MM100_SPI1_MOSI B5
#define MM100_COATED_SPI1_MOSI A7
#define MM100_SPI1_MISO B4
#define MM100_SPI1_SCK B3
#define MM100_SPI1_CS1 B6
#define MM100_SPI1_CS2 B7

#define MM100_SPI2_MOSI B15
#define MM100_SPI2_MISO B14
#define MM100_SPI2_SCK B13
#define MM100_COATED_SPI2_SCK D3
#define MM100_SPI2_CS B12

#define MM100_SPI3_MOSI C12
#define MM100_SPI3_MISO C11
#define MM100_SPI3_SCK C10
#define MM100_SPI3_CS A15

// matches H176_CAN_RX & H176_CAN_TX
//MM100_COATED has no CAN1 
#define MM100_CAN_RX D0
#define MM100_CAN_TX D1

#define MM100_COATED_CAN2_RX B5
#define MM100_COATED_CAN2_TX B13

#define MM100_UART8_RX E0
#define MM100_UART8_TX E1

#define MM100_UART2_RX D6
#define MM100_UART2_TX D5

#define MM100_USB1ID A10

// matches H144_GP8
//GP8 = PWR_EN
#define MM100_GP8 E10

#define MM100_LED1_RED D4
#define MM100_LED2_GREEN D7
#define MM100_LED3_BLUE E7
#define MM100_LED4_YELLOW E8

#define MM100_BOARD_ID1 D9
#define MM100_BOARD_ID2 D8
