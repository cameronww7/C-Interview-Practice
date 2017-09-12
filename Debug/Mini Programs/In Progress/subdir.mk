################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Mini\ Programs/In\ Progress/GameOfLife.cpp \
../Mini\ Programs/In\ Progress/UnqiuePaths.cpp 

OBJS += \
./Mini\ Programs/In\ Progress/GameOfLife.o \
./Mini\ Programs/In\ Progress/UnqiuePaths.o 

CPP_DEPS += \
./Mini\ Programs/In\ Progress/GameOfLife.d \
./Mini\ Programs/In\ Progress/UnqiuePaths.d 


# Each subdirectory must supply rules for building sources it contributes
Mini\ Programs/In\ Progress/GameOfLife.o: ../Mini\ Programs/In\ Progress/GameOfLife.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Mini Programs/In Progress/GameOfLife.d" -MT"Mini\ Programs/In\ Progress/GameOfLife.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Mini\ Programs/In\ Progress/UnqiuePaths.o: ../Mini\ Programs/In\ Progress/UnqiuePaths.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Mini Programs/In Progress/UnqiuePaths.d" -MT"Mini\ Programs/In\ Progress/UnqiuePaths.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


