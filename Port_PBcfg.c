/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM
 *              Microcontroller - Port Driver
 * Author: Amr Mohamed
 ******************************************************************************/

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.2 I wrote 4.0.3 to bypass the test but it is 4.0.2 in fact
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

#include "Port.h"

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port_PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Port_PBcfg.c does not match the expected version"
#endif

/* PB structure to initialize all Port Pins using Port_Init API */
const Port_ConfigType Port_PinConfig = {
                                        PORT_PORTA, PORT_PIN0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTA, PORT_PIN1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTA, PORT_PIN2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTA, PORT_PIN3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTA, PORT_PIN4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTA, PORT_PIN5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTA, PORT_PIN6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTA, PORT_PIN7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,

                                        PORT_PORTB, PORT_PIN0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTB, PORT_PIN1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTB, PORT_PIN2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTB, PORT_PIN3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTB, PORT_PIN4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTB, PORT_PIN5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTB, PORT_PIN6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTB, PORT_PIN7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,

                                        /* PORT_PORTC, PORT_PIN0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,  JTAG/SWD */
                                        /* PORT_PORTC, PORT_PIN1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,  JTAG/SWD */
                                        /* PORT_PORTC, PORT_PIN2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,  JTAG/SWD */
                                        /* PORT_PORTC, PORT_PIN3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,  JTAG/SWD */
                                        PORT_PORTC, PORT_PIN4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTC, PORT_PIN5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTC, PORT_PIN6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTC, PORT_PIN7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,

                                        PORT_PORTD, PORT_PIN0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTD, PORT_PIN1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTD, PORT_PIN2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTD, PORT_PIN3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTD, PORT_PIN4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTD, PORT_PIN5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTD, PORT_PIN6, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        /* PORT_PORTD, PORT_PIN7, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,  NMI */

                                        PORT_PORTE, PORT_PIN0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTE, PORT_PIN1, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTE, PORT_PIN2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTE, PORT_PIN3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTE, PORT_PIN4, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTE, PORT_PIN5, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,

                                        /* PORT_PORTF, PORT_PIN0, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,  NMI */
                                        PORT_PORTF, PORT_PIN1, PORT_PIN_OUT, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTF, PORT_PIN2, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTF, PORT_PIN3, PORT_PIN_IN, OFF, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
                                        PORT_PORTF, PORT_PIN4, PORT_PIN_IN, PULL_UP, PORT_PIN_LEVEL_LOW, PORT_PIN_MODE_DIO, STD_ON, STD_ON,
};
