/*
 * EXT_INT_Interface.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef MCAL_EXT_INT_EXT_INT_INTERFACE_H_
#define MCAL_EXT_INT_EXT_INT_INTERFACE_H_
//*******************************************_INCLUDE_*************************************************
#include "EXT_INT_Config.h"
#include "BitMath.h"
#include "STD.h"
#include <avr/interrupt.h>
//********************************************_MACROS_*************************************************
#define EXT_INT_0           0
#define EXT_INT_1           1
#define EXT_INT_2           2
//*******************************************_PROTOTYPES_**********************************************
void M_EXT_INT_Void_ExtIntInit(u8);
void M_EXT_INT_VOID_SetCallBack(void(*)(void));

#endif /* MCAL_EXT_INT_EXT_INT_INTERFACE_H_ */
