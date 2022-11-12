/*
 * UART_Interface.h
 *
 *  Created on: Sep 21, 2022
 *      Author: ali_l
 */

#ifndef MCAL_UART_UART_INTERFACE_H_
#define MCAL_UART_UART_INTERFACE_H_

#include "BitMath.h"
#include "STD.h"
#include "UART_Config.h"
#include "DIO_Interface.h"

void M_UART_Void_UARTInit(void);
void M_UART_U8_UARTSend(u8);
u8 M_UART_Void_UARTRec(void);

#endif /* MCAL_UART_UART_INTERFACE_H_ */
