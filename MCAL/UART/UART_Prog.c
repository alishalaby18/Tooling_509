/*
 * UART_Prog.c
 *
 *  Created on: Sep 21, 2022
 *      Author: ali_l
 */

#include "UART_Interface.h"
#include "UART_Private.h"
#include "UART_Config.h"

#define UART_FINISHED_RECIVING      1
#define UART_FINISHED_TRANSMITTING  1
#define POLLING_TIME             2000000
/* UCSRA BITS */
#define TXC_BIT    6
#define RXC_BIT    7
/* UCSRB BITS */
#define TXEN_BIT   4
#define RXEN_BIT   3
#define UCSZ2_BIT  2
/* UCSRC BITS */
#define UCSZ1_BIT  2
#define UCSZ0_BIT  1
#define UMSEL_BIT  6
#define UPM1_BIT   5
#define UPM0_BIT   4
#define USBS_BIT   3

#define UART_PARITY_DISABLE   1
#define UART_PARITY_EVEN   2
#define UART_PARITY_ODD   3
#define UART_1_STOP_BIT                    1
#define UART_2_STOP_BIT                    2


void M_UART_Void_UARTInit(void)
{
	u8 Local_U8_UCSRCValue = 0b10000000;

	M_DIO_Void_SetPinDirection(PD0_PIN,INPUT);
	M_DIO_Void_SetPinDirection(PD0_PIN,OUTPUT);
	//to enable rx circuit
	SET_BIT(UCSRB_REG,RXEN_BIT);
	//to enable tx circuit
	SET_BIT(UCSRB_REG,TXEN_BIT);
	//to select charcter size 8 bit
	CLR_BIT(UCSRB_REG,UCSZ2_BIT);
	SET_BIT(Local_U8_UCSRCValue,UCSZ1_BIT);
	SET_BIT(Local_U8_UCSRCValue,UCSZ0_BIT);
	//to select asynch. mode
	CLR_BIT(Local_U8_UCSRCValue,UMSEL_BIT);
#if UART_PARITY_MODE  == UART_PARITY_DISABLE
	CLR_BIT(Local_U8_UCSRCValue,UPM0_BIT);
	CLR_BIT(Local_U8_UCSRCValue,UPM1_BIT);
#elif UART_PARITY_MODE  == UART_PARITY_EVEN
	CLR_BIT(Local_U8_UCSRCValue,UPM0_BIT);
	SET_BIT(Local_U8_UCSRCValue,UPM1_BIT);
#elif UART_PARITY_MODE  == UART_PARITY_ODD
	SET_BIT(Local_U8_UCSRCValue,UPM0_BIT);
	SET_BIT(Local_U8_UCSRCValue,UPM1_BIT);
#endif
#if UART_STOP_BITS  == UART_1_STOP_BIT
	CLR_BIT(Local_U8_UCSRCValue,USBS_BIT);
#elif UART_STOP_BITS  == UART_2_STOP_BIT
	SET_BIT(Local_U8_UCSRCValue,USBS_BIT);
#endif
	UCSRC_REG = Local_U8_UCSRCValue;
	/* TO SELECT BAUDRATE -> 9600 */
	UBRRL_REG = ((F_OSC * (u32)1000000) / ((u32)16 * UART_BAUDRATE)) - 1;
	/* TO ENABLE RX CICUIT */
	SET_BIT(UCSRB_REG,RXEN_BIT);
	/* TO ENABLE TX CIRCUIT */
	SET_BIT(UCSRB_REG,TXEN_BIT);

}
void M_UART_U8_UARTSend(u8 Copy_U8_Data)
{
	u32 Local_U32_Counter = 0;
	UDR_REG = Copy_U8_Data;
	while(Local_U32_Counter<POLLING_TIME)
	{
		Local_U32_Counter++;
	if(GET_BIT(UCSRA_REG,TXC_BIT)==UART_FINISHED_TRANSMITTING)
	{
		break;
	}
	}
}
u8 M_UART_Void_UARTRec(void)
{
	u32 Local_U32_Counter = 0;
	while(Local_U32_Counter<POLLING_TIME)
	{
		Local_U32_Counter++;
	if(GET_BIT(UCSRA_REG,RXC_BIT)==UART_FINISHED_RECIVING)
	{
		break;
	}
	}
	return UDR_REG;
}

