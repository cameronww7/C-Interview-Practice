################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AddingTwoNumbers.cpp \
../src/EuclideanDistance.cpp \
../src/LongestPalindromeInString.cpp \
../src/MedianOfTwoSortedArrays.cpp \
../src/Palindrome.cpp \
../src/RemoveCharFromString.cpp \
../src/TwoSum.cpp \
../src/main.cpp 

OBJS += \
./src/AddingTwoNumbers.o \
./src/EuclideanDistance.o \
./src/LongestPalindromeInString.o \
./src/MedianOfTwoSortedArrays.o \
./src/Palindrome.o \
./src/RemoveCharFromString.o \
./src/TwoSum.o \
./src/main.o 

CPP_DEPS += \
./src/AddingTwoNumbers.d \
./src/EuclideanDistance.d \
./src/LongestPalindromeInString.d \
./src/MedianOfTwoSortedArrays.d \
./src/Palindrome.d \
./src/RemoveCharFromString.d \
./src/TwoSum.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


