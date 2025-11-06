################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/circular_buffer.cpp \
../Core/Src/command.cpp \
../Core/Src/debug.cpp \
../Core/Src/global.cpp \
../Core/Src/main.cpp \
../Core/Src/nrflink.cpp \
../Core/Src/softTimer.cpp \
../Core/Src/softTimerManager.cpp \
../Core/Src/system.cpp 

C_SRCS += \
../Core/Src/NRF24L01.c \
../Core/Src/adc.c \
../Core/Src/dma.c \
../Core/Src/gpio.c \
../Core/Src/retarget.c \
../Core/Src/spi.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/tim.c \
../Core/Src/usart.c 

C_DEPS += \
./Core/Src/NRF24L01.d \
./Core/Src/adc.d \
./Core/Src/dma.d \
./Core/Src/gpio.d \
./Core/Src/retarget.d \
./Core/Src/spi.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/tim.d \
./Core/Src/usart.d 

OBJS += \
./Core/Src/NRF24L01.o \
./Core/Src/adc.o \
./Core/Src/circular_buffer.o \
./Core/Src/command.o \
./Core/Src/debug.o \
./Core/Src/dma.o \
./Core/Src/global.o \
./Core/Src/gpio.o \
./Core/Src/main.o \
./Core/Src/nrflink.o \
./Core/Src/retarget.o \
./Core/Src/softTimer.o \
./Core/Src/softTimerManager.o \
./Core/Src/spi.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/tim.o \
./Core/Src/usart.o 

CPP_DEPS += \
./Core/Src/circular_buffer.d \
./Core/Src/command.d \
./Core/Src/debug.d \
./Core/Src/global.d \
./Core/Src/main.d \
./Core/Src/nrflink.d \
./Core/Src/softTimer.d \
./Core/Src/softTimerManager.d \
./Core/Src/system.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.cpp Core/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/NRF24L01.cyclo ./Core/Src/NRF24L01.d ./Core/Src/NRF24L01.o ./Core/Src/NRF24L01.su ./Core/Src/adc.cyclo ./Core/Src/adc.d ./Core/Src/adc.o ./Core/Src/adc.su ./Core/Src/circular_buffer.cyclo ./Core/Src/circular_buffer.d ./Core/Src/circular_buffer.o ./Core/Src/circular_buffer.su ./Core/Src/command.cyclo ./Core/Src/command.d ./Core/Src/command.o ./Core/Src/command.su ./Core/Src/debug.cyclo ./Core/Src/debug.d ./Core/Src/debug.o ./Core/Src/debug.su ./Core/Src/dma.cyclo ./Core/Src/dma.d ./Core/Src/dma.o ./Core/Src/dma.su ./Core/Src/global.cyclo ./Core/Src/global.d ./Core/Src/global.o ./Core/Src/global.su ./Core/Src/gpio.cyclo ./Core/Src/gpio.d ./Core/Src/gpio.o ./Core/Src/gpio.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/nrflink.cyclo ./Core/Src/nrflink.d ./Core/Src/nrflink.o ./Core/Src/nrflink.su ./Core/Src/retarget.cyclo ./Core/Src/retarget.d ./Core/Src/retarget.o ./Core/Src/retarget.su ./Core/Src/softTimer.cyclo ./Core/Src/softTimer.d ./Core/Src/softTimer.o ./Core/Src/softTimer.su ./Core/Src/softTimerManager.cyclo ./Core/Src/softTimerManager.d ./Core/Src/softTimerManager.o ./Core/Src/softTimerManager.su ./Core/Src/spi.cyclo ./Core/Src/spi.d ./Core/Src/spi.o ./Core/Src/spi.su ./Core/Src/stm32f1xx_hal_msp.cyclo ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.cyclo ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system.cyclo ./Core/Src/system.d ./Core/Src/system.o ./Core/Src/system.su ./Core/Src/system_stm32f1xx.cyclo ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su ./Core/Src/tim.cyclo ./Core/Src/tim.d ./Core/Src/tim.o ./Core/Src/tim.su ./Core/Src/usart.cyclo ./Core/Src/usart.d ./Core/Src/usart.o ./Core/Src/usart.su

.PHONY: clean-Core-2f-Src

