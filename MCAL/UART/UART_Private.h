/*
 * UART_Private.h
 *
 *  Created on: Sep 21, 2022
 *      Author: ali_l
 */

#ifndef MCAL_UART_UART_PRIVATE_H_
#define MCAL_UART_UART_PRIVATE_H_

#define UDR_REG     *(volatile u8*)0x2C
#define UCSRA_REG   *(volatile u8*)0x2B
#define UCSRB_REG   *(volatile u8*)0x2A
#define UCSRC_REG   *(volatile u8*)0x40
#define UBRRL_REG   *(volatile u8*)0x29



#endif /* MCAL_UART_UART_PRIVATE_H_ */
