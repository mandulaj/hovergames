/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */
#define SOPT5_UART1TXSRC_UART_TX 0x00u /*!<@brief UART 1 transmit data source select: UART1_TX pin */

/*! @name PORTB16 (number 62), U7[4]/UART0_RX
  @{ */
#define BOARD_INITPINS_DEBUG_UART_RX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_DEBUG_UART_RX_PIN 16U    /*!<@brief PORTB pin index: 16 */
                                                /* @} */

/*! @name PORTB17 (number 63), U10[1]/UART0_TX
  @{ */
#define BOARD_INITPINS_DEBUG_UART_TX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_DEBUG_UART_TX_PIN 17U    /*!<@brief PORTB pin index: 17 */
                                                /* @} */

/*! @name PORTD2 (number 95), J2[8]
  @{ */
#define BOARD_INITPINS_UART2_RX_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_UART2_RX_PIN 2U     /*!<@brief PORTD pin index: 2 */
                                           /* @} */

/*! @name PORTD3 (number 96), J2[10]
  @{ */
#define BOARD_INITPINS_UART2_TX_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_UART2_TX_PIN 3U     /*!<@brief PORTD pin index: 3 */
                                           /* @} */

/*! @name PORTD7 (number 100), J6[7]/RF_WIFI_MISO
  @{ */
#define BOARD_INITPINS_WIFI_MISO_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_WIFI_MISO_PIN 7U     /*!<@brief PORTD pin index: 7 */
                                            /* @} */

/*! @name PORTD6 (number 99), J6[6]/RF_WIFI_MOSI
  @{ */
#define BOARD_INITPINS_WIFI_MOSI_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_WIFI_MOSI_PIN 6U     /*!<@brief PORTD pin index: 6 */
                                            /* @} */

/*! @name PORTD5 (number 98), J6[5]/RF_WIFI_SCK
  @{ */
#define BOARD_INITPINS_WIFI_SCK_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_WIFI_SCK_PIN 5U     /*!<@brief PORTD pin index: 5 */
                                           /* @} */

/*! @name PORTD4 (number 97), J6[4]/RF_WIFI_CS
  @{ */
#define BOARD_INITPINS_WIFI_CS_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_WIFI_CS_PIN 4U     /*!<@brief PORTD pin index: 4 */
                                          /* @} */

/*! @name PORTC16 (number 90), J1[2]
  @{ */
#define BOARD_INITPINS_TMR_1588_0_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_TMR_1588_0_PIN 16U    /*!<@brief PORTC pin index: 16 */
                                             /* @} */

/*! @name PORTC17 (number 91), J1[4]
  @{ */
#define BOARD_INITPINS_TMR_1588_1_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_TMR_1588_1_PIN 17U    /*!<@brief PORTC pin index: 17 */
                                             /* @} */

/*! @name PORTE24 (number 31), J2[20]/U8[4]/I2C0_SCL
  @{ */
#define BOARD_INITPINS_ACCEL_SCL_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_ACCEL_SCL_PIN 24U    /*!<@brief PORTE pin index: 24 */
                                            /* @} */

/*! @name PORTE25 (number 32), J2[18]/U8[6]/I2C0_SDA
  @{ */
#define BOARD_INITPINS_ACCEL_SDA_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_ACCEL_SDA_PIN 25U    /*!<@brief PORTE pin index: 25 */
                                            /* @} */

/*! @name PORTB21 (number 67), D12[3]/LEDRGB_BLUE
  @{ */
#define BOARD_INITPINS_LED_BLUE_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_LED_BLUE_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_LED_BLUE_PIN 21U    /*!<@brief PORTB pin index: 21 */
                                           /* @} */

/*! @name PORTE26 (number 33), J2[1]/D12[4]/LEDRGB_GREEN
  @{ */
#define BOARD_INITPINS_LED_GREEN_GPIO GPIOE /*!<@brief GPIO device name: GPIOE */
#define BOARD_INITPINS_LED_GREEN_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_INITPINS_LED_GREEN_PIN 26U    /*!<@brief PORTE pin index: 26 */
                                            /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/