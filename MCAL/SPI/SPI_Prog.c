/*
 * SPI_Prog.c
 *
 *  Created on: Sep 22, 2022
 *      Author: ali_l
 */

#include "SPI_Private.h"
#include "SPI_Interface.h"

void M_SPI_Void_SPIInit(void)
{
#if SPI_MODE ==SPI_MASTER_MODE
	//to select master bit
	SET_BIT(SPCR_REG,MSTR_BIT);
	//to select div factor
	SET_BIT(SPCR_REG,SPR0_BIT);
	SET_BIT(SPCR_REG,SPR1_BIT);
	M_DIO_Void_SetPinDirection(PB5_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(PB6_PIN,INPUT);
	M_DIO_Void_SetPinDirection(PB4_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(PB7_PIN,OUTPUT);
#elif SPI_MODE ==SPI_MASTER_MODE
	SET_BIT(SPCR_REG,MSTR_BIT);
	M_DIO_Void_SetPinDirection(PB5_PIN,INPUT);
	M_DIO_Void_SetPinDirection(PB6_PIN,OUTPUT);
	M_DIO_Void_SetPinDirection(PB4_PIN,INPUT);
	M_DIO_Void_SetPinDirection(PB7_PIN,INPUT);
#endif
	//to select sending from lsb
	SET_BIT(SPCR_REG,DORD_BIT);
	//to enable sPE circut
	SET_BIT(SPCR_REG,SPE_BIT);
}
u8 M_SPI_U8_SPITransive(u8 Copy_U8_DataSend)
{
	SPDR_REG = Copy_U8_DataSend;
	u32 Local_U32_Counter = 0;
	while(Local_U32_Counter<POLLING_TIME)
		{
			Local_U32_Counter++;
		if(GET_BIT(SPSR_REG,SPIF_BIT)==SPA_FINISHED_TRANSIVE)
		{
			break;
		}
		}
	return SPDR_REG;
}
