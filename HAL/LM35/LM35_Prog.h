/*
 * LM_Prog.h
 *
 *  Created on: Sep 13, 2022
 *      Author: ali_l
 */

#include "LM35_Interface.h"

void H_LM35_Void_L35Init(void)
{
	M_ADC_Void_ADCInit();
}
u16 H_LM35_Void_LM35Read(void)
{
	u16 Local_U16_AdcValue = M_ADC_Void_ADCRead(LM35_PIN);
	u16 temp = ((u32)Local_U16_AdcValue * 500) / 1023;
	return temp;
}
