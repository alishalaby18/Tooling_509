/*
 * RELAY_Prog.c
 *
 *  Created on: Sep 1, 2022
 *      Author: ali_l
 */
#include "RELAY_Interface.h"

void H_Relay_Void_RelayInit(void)
{
	M_DIO_Void_SetPinDirection(Relay_PIN,OUTPUT);
}
void H_Relay_Void_RelaySetOn(void)
{
	M_DIO_Void_SetPinValue(Relay_PIN,HIGH);
}
void H_Relay_Void_RelaySetOff(void)
{
	M_DIO_Void_SetPinValue(Relay_PIN,LOW);
}
void H_Relay_void_RelayTog(void)
{
	M_DIO_Void_TogPin(Relay_PIN);
}
