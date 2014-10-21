################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../main.cpp 

OBJS += \
./main.o 

CPP_DEPS += \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-none-eabi-g++ -DDEBUG -I"C:\Users\gbmhunter\GoogleDrive\Projects\TemplatePsocEclipseCpp\TestProjectCpp.cydsn" -I"C:\Users\gbmhunter\GoogleDrive\Projects\TemplatePsocEclipseCpp\TestProjectCpp.cydsn\Generated_Source\PSoC5" -O2 -ffunction-sections -g -Wall -c -fmessage-length=0 -mcpu=cortex-m3 -mthumb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


