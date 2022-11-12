/*
 * Servo_Prog.c
 *
 *  Created on: Sep 20, 2022
 *      Author: ali_l
 */

#include "Servo_Interface.h"

void H_Servo_Void_ServoInit(void)
{
	M_TIMER_Void_PWMInit(TIMER1_CHANNEL);
	M_TIMER_U8_PWMSetFrequency(50);
}
void H_Servo_Void_ServoSetAngle(u8 Copy_U8_Angle)
{
	f32 Local_F32_Value = ((Copy_U8_Angle * 5.0 ) / 180.0) + 5.0;
	M_TIMER_F32_PWMSetDutyCycle(TIMER1_CHANNEL,Local_F32_Value);
}
void H_Servo_Void_ServoSetStart(void)
{
	M_TIMER_U32_PWMStart(TIMER1_CHANNEL);
}
void H_Servo_Void_ServoSetStop(void)
{
	M_TIMER_U32_PWMStop(TIMER1_CHANNEL);
}

