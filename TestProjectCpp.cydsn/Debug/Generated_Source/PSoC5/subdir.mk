################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Source/PSoC5/Cm3Start.c \
../Generated_Source/PSoC5/CyDmac.c \
../Generated_Source/PSoC5/CyFlash.c \
../Generated_Source/PSoC5/CyLib.c \
../Generated_Source/PSoC5/CyPinLedPower.c \
../Generated_Source/PSoC5/CySpc.c \
../Generated_Source/PSoC5/cyPm.c \
../Generated_Source/PSoC5/cyfitter_cfg.c \
../Generated_Source/PSoC5/cymetadata.c \
../Generated_Source/PSoC5/cyutils.c 

S_SRCS += \
../Generated_Source/PSoC5/CyBootAsmGnu.s 

OBJS += \
./Generated_Source/PSoC5/Cm3Start.o \
./Generated_Source/PSoC5/CyBootAsmGnu.o \
./Generated_Source/PSoC5/CyDmac.o \
./Generated_Source/PSoC5/CyFlash.o \
./Generated_Source/PSoC5/CyLib.o \
./Generated_Source/PSoC5/CyPinLedPower.o \
./Generated_Source/PSoC5/CySpc.o \
./Generated_Source/PSoC5/cyPm.o \
./Generated_Source/PSoC5/cyfitter_cfg.o \
./Generated_Source/PSoC5/cymetadata.o \
./Generated_Source/PSoC5/cyutils.o 

C_DEPS += \
./Generated_Source/PSoC5/Cm3Start.d \
./Generated_Source/PSoC5/CyDmac.d \
./Generated_Source/PSoC5/CyFlash.d \
./Generated_Source/PSoC5/CyLib.d \
./Generated_Source/PSoC5/CyPinLedPower.d \
./Generated_Source/PSoC5/CySpc.d \
./Generated_Source/PSoC5/cyPm.d \
./Generated_Source/PSoC5/cyfitter_cfg.d \
./Generated_Source/PSoC5/cymetadata.d \
./Generated_Source/PSoC5/cyutils.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Source/PSoC5/%.o: ../Generated_Source/PSoC5/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler (PSoC Creator)'
	arm-none-eabi-gcc -DDEBUG -I"C:\Users\gbmhunter\GoogleDrive\Projects\TemplatePsocEclipseCpp\TestProjectCpp.cydsn" -I"C:\Users\gbmhunter\GoogleDrive\Projects\TemplatePsocEclipseCpp\TestProjectCpp.cydsn\Generated_Source\PSoC5" -O2 -ffunction-sections -g -Wall -c -fmessage-length=0 -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Source/PSoC5/%.o: ../Generated_Source/PSoC5/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Assembler (PSoC Creator)'
	arm-none-eabi-as -I"C:\Users\gbmhunter\GoogleDrive\Projects\TemplatePsocEclipseCpp\TestProjectCpp.cydsn" -I"C:\Users\gbmhunter\GoogleDrive\Projects\TemplatePsocEclipseCpp\TestProjectCpp.cydsn\Generated_Source\PSoC5" -mcpu=cortex-m3 -mthumb -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


