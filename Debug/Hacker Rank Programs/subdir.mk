################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Hacker\ Rank\ Programs/HK-BasicDataTypes.cpp \
../Hacker\ Rank\ Programs/HK-InputAndOutput.cpp 

OBJS += \
./Hacker\ Rank\ Programs/HK-BasicDataTypes.o \
./Hacker\ Rank\ Programs/HK-InputAndOutput.o 

CPP_DEPS += \
./Hacker\ Rank\ Programs/HK-BasicDataTypes.d \
./Hacker\ Rank\ Programs/HK-InputAndOutput.d 


# Each subdirectory must supply rules for building sources it contributes
Hacker\ Rank\ Programs/HK-BasicDataTypes.o: ../Hacker\ Rank\ Programs/HK-BasicDataTypes.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Hacker Rank Programs/HK-BasicDataTypes.d" -MT"Hacker\ Rank\ Programs/HK-BasicDataTypes.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Hacker\ Rank\ Programs/HK-InputAndOutput.o: ../Hacker\ Rank\ Programs/HK-InputAndOutput.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Hacker Rank Programs/HK-InputAndOutput.d" -MT"Hacker\ Rank\ Programs/HK-InputAndOutput.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


