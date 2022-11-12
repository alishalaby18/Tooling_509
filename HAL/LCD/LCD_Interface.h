/*
 * LCD_Interface.h
 *
 *  Created on: Sep 6, 2022
 *      Author: ali_l
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_
//*******************************************_INCLUDE_*************************************************
#include "LCD_Config.h"
#include "DIO_Interface.h"
#include <util/delay.h>
//********************************************_MACROS_*************************************************
#define NULL_ '\0'
//*******************************************_PROTOTYPES_**********************************************
void H_LCD_Void_LCDInit(void);
void H_LCD_Void_LCDWriteCharacter(u8);
void H_LCD_Void_LCDWriteCommand(u8);
void H_LCD_Void_LCDWriteString(u8*);
void H_LCD_Void_LCDWriteNumber(f32);
void H_LCD_Void_LCDGoTo(u8,u8);
void H_LCD_Void_LCDClear(void);

#endif /* HAL_LCD_LCD_INTERFACE_H_ */
