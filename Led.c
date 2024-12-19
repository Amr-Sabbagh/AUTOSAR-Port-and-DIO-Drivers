/******************************************************************************
 *
 * Module: Led
 *
 * File Name: Led.c
 *
 * Description: Source file for Led Module.
 *
 * Author: Mohamed Tarek
 ******************************************************************************/
#include "Port.h"
#include "Dio.h"
#include "Led.h"
#include "Std_Types.h"

/* LED Configurations Structure */
static Port_ConfigType  g_LED_Config;

/*********************************************************************************************/
/* Description: Called by the LED_Init function (only) used to fill the led configurations structure */
static void Led_FillConfigurations(void)
{
    g_LED_Config.Pin[0].port_num  = LED_PORT;        /* Set LED Port value */
    g_LED_Config.Pin[0].pin_num   = LED_PIN_NUM;     /* Set LED PIN Number value */
    g_LED_Config.Pin[0].direction = PORT_PIN_OUT;    /* Set LED as OUTPUT pin */
    g_LED_Config.Pin[0].resistor  = OFF;             /* Disable internal resistor */
    g_LED_Config.Pin[0].initial_value  = PORT_PIN_LEVEL_LOW;    /* Turn Off the LED */
    g_LED_Config.Pin[0].initial_mode = PORT_PIN_MODE_DIO;
    g_LED_Config.Pin[0].pin_direction_changeable = STD_ON;
    g_LED_Config.Pin[0].pin_mode_changeable = STD_ON;
}

/*********************************************************************************************/
void Led_Init(void)
{
    Led_FillConfigurations();
    Port_Init(&g_LED_Config);
}

/*********************************************************************************************/
void Led_SetOn(void)
{
    Dio_WriteChannel(DioConf_LED1_CHANNEL_ID_INDEX,LED_ON);  /* LED ON */
}

/*********************************************************************************************/
void Led_SetOff(void)
{
    Dio_WriteChannel(DioConf_LED1_CHANNEL_ID_INDEX,LED_OFF); /* LED OFF */
}

/*********************************************************************************************/
void Led_RefreshOutput(void)
{
    Dio_LevelType state = Dio_ReadChannel(DioConf_LED1_CHANNEL_ID_INDEX);
    Dio_WriteChannel(DioConf_LED1_CHANNEL_ID_INDEX,state); /* re-write the same value */
}

/*********************************************************************************************/
void Led_Toggle(void)
{
    Dio_LevelType state = Dio_FlipChannel(DioConf_LED1_CHANNEL_ID_INDEX);
}

/*********************************************************************************************/
