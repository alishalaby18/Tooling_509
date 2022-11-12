/*
 * KeyPad_Interface.h
 *
 *  Created on: Sep 9, 2022
 *      Author: ali_l
 */

#ifndef HAL_KEYPAD_KEYPAD_INTERFACE_H_
#define HAL_KEYPAD_KEYPAD_INTERFACE_H_
//*******************************************_INCLUDE_*************************************************
#include "STD.h"
#include "DIO_Interface.h"
#include "KeyPad_Config.h"
#include "BitMath.h"
#include <util/delay.h>
//********************************************_MACROS_*************************************************
#define KEYPAD_PRESSED  0
#define KEYPAD_RELEASED  1
//*******************************************_PROTOTYPES_**********************************************
void H_KeyPad_Void_KeyPadInit(void);
u8 H_KeyPad_U8_KeyPadRead(void);

#endif /* HAL_KEYPAD_KEYPAD_INTERFACE_H_ */
