################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/HAL/DIO_Program.c \
../Drivers/HAL/PWM_program.c 

OBJS += \
./Drivers/HAL/DIO_Program.o \
./Drivers/HAL/PWM_program.o 

C_DEPS += \
./Drivers/HAL/DIO_Program.d \
./Drivers/HAL/PWM_program.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/HAL/%.o: ../Drivers/HAL/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


