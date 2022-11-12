################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/Timer/Timer_Prog.c 

OBJS += \
./MCAL/Timer/Timer_Prog.o 

C_DEPS += \
./MCAL/Timer/Timer_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/Timer/%.o: ../MCAL/Timer/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\AT24C16A" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\I2C" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\SPI" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\UART" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL\DCMotor" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\WDT" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\GIE" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\Timer" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL\LM35" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\ADC" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL\KeyPad" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\EXT_INT" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL\LCD" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL\RELAY" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL\SSD" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL\PB" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL\Buzzer" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\APP" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\HAL\LED" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL" -I"F:\CUFE\agaza\amit\Tooling_Maadi_509\tooling\509_group\MCAL\DIO" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


