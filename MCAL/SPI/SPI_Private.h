/*
 * SPI_Private.h
 *
 *  Created on: Sep 22, 2022
 *      Author: ali_l
 */

#ifndef MCAL_SPI_SPI_PRIVATE_H_
#define MCAL_SPI_SPI_PRIVATE_H_

#define SPCR_REG  *(volatile u8*)0x2D
#define SPDR_REG  *(volatile u8*)0x2F
#define SPSR_REG  *(volatile u8*)0x2E

#define SPE_BIT                  6
#define DORD_BIT                 5
#define MSTR_BIT                 4
#define SPR0_BIT                 0
#define SPR1_BIT                 1

#define SPIF_BIT                 7

#define SPI_MASTER_MODE          1
#define SPI_SLAVE_MODE           2

#define POLLING_TIME             2000000
#define SPA_FINISHED_TRANSIVE    1


#endif /* MCAL_SPI_SPI_PRIVATE_H_ */
