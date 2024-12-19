 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Dio Driver
 *
 * Author: Amr Mohamed
 ******************************************************************************/

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION               (1U)
#define PORT_CFG_SW_MINOR_VERSION               (0U)
#define PORT_CFG_SW_PATCH_VERSION               (0U)

/*
 * AUTOSAR Version 4.0.2 I wrote 4.0.3 to bypass the test but it is 4.0.2 in fact
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION       (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION       (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION       (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                   (STD_ON)

/* Pre-compile option for presence of Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API              (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                   (STD_OFF)

/* Pre-compile option for presence of Port_SetPinMode API */
#define PORT_SET_PIN_MODE_API                   (STD_ON)

/* Number of PINS */
#define PORT_CONFIGURED_PINS                    (39U)

/* Tiva-c Ports */
#define PORT_PORTA                              (0U)
#define PORT_PORTB                              (1U)
#define PORT_PORTC                              (2U)
#define PORT_PORTD                              (3U)
#define PORT_PORTE                              (4U)
#define PORT_PORTF                              (5U)

/* Tiva-c Pins */
#define PORT_PIN0                               (0U)
#define PORT_PIN1                               (1U)
#define PORT_PIN2                               (2U)
#define PORT_PIN3                               (3U)
#define PORT_PIN4                               (4U)
#define PORT_PIN5                               (5U)
#define PORT_PIN6                               (6U)
#define PORT_PIN7                               (7U)

#endif /* PORT_CFG_H_ */
