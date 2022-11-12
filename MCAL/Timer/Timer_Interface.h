/*
 * Timer_Interface.h
 *
 *  Created on: Sep 13, 2022
 *      Author: ali_l
 */

#ifndef MCAL_TIMER_TIMER_INTERFACE_H_
#define MCAL_TIMER_TIMER_INTERFACE_H_
//*******************************************_INCLUDES_*************************************************
#include <Timer/Timer_Config.h>
#include "STD.h"
#include "BitMath.h"
//*******************************************_DEFINES_**********************************************
#define TIMER0_CHANNEL      0
#define TIMER1_CHANNEL      1
#define TIMER2_CHANNEL      2
//*******************************************_PROTOTYPES_**********************************************
void M_TIMER_Void_TimerInit(u8);
void M_TIMER_U32_TimerSetTime(u8, u32);
void M_TIMER_Void_TimerStart(u8);
void M_TIMER_Void_TimerStop(u8);
void M_TIMER_Void_PWMInit(u8);
void M_TIMER_F32_PWMSetDutyCycle(u8,f32);
void M_TIMER_U8_PWMSetFrequency(u8);
void M_TIMER_U32_PWMStart(u8);
void M_TIMER_U32_PWMStop(u8);
void M_TIMER_VOID_SetCallBack(u8,void(*)(void));

#endif /* MCAL_TIMER_TIMER_INTERFACE_H_ */
