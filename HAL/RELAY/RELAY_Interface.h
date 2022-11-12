/*
 * RELAY_Interface.h
 *
 *  Created on: Sep 1, 2022
 *      Author: ali_l
 */

#ifndef HAL_RELAY_RELAY_INTERFACE_H_
#define HAL_RELAY_RELAY_INTERFACE_H_
//********************************************_INCLUDES_*************************************************
#include "STD.h"
#include "RELAY_Config.h"
#include "DIO_Interface.h"
//********************************************_PROTOTYPES_*************************************************
void H_Relay_Void_RelayInit(void);
void H_Relay_Void_RelaySetOn(void);
void H_Relay_Void_RelaySetOff(void);
void H_Relay_void_RelayTog(void);
#endif /* HAL_RELAY_RELAY_INTERFACE_H_ */
