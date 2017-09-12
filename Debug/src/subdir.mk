################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ClimbingStairs.cpp \
../src/CountPrimes.cpp \
../src/EuclideanDistance.cpp \
../src/FizzBuzz.cpp \
../src/GameOfLife.cpp \
../src/HK-BasicDataTypes.cpp \
../src/HK-ConditionalStatements.cpp \
../src/HK-ForLoop.cpp \
../src/HK-Functions.cpp \
../src/HK-InputAndOutput.cpp \
../src/HK-Pointers.cpp \
../src/JumpGame.cpp \
../src/LongestPalindromeInString.cpp \
../src/MedianOfTwoSortedArrays.cpp \
../src/Palindrome.cpp \
../src/PascalsTriangle.cpp \
../src/PowerOfThree.cpp \
../src/RemoveCharFromString.cpp \
../src/ReverseBits.cpp \
../src/ReverseInteger.cpp \
../src/ReverseString.cpp \
../src/SingleNumber.cpp \
../src/TwoSum.cpp \
../src/UnqiuePaths.cpp \
../src/main.cpp 

OBJS += \
./src/ClimbingStairs.o \
./src/CountPrimes.o \
./src/EuclideanDistance.o \
./src/FizzBuzz.o \
./src/GameOfLife.o \
./src/HK-BasicDataTypes.o \
./src/HK-ConditionalStatements.o \
./src/HK-ForLoop.o \
./src/HK-Functions.o \
./src/HK-InputAndOutput.o \
./src/HK-Pointers.o \
./src/JumpGame.o \
./src/LongestPalindromeInString.o \
./src/MedianOfTwoSortedArrays.o \
./src/Palindrome.o \
./src/PascalsTriangle.o \
./src/PowerOfThree.o \
./src/RemoveCharFromString.o \
./src/ReverseBits.o \
./src/ReverseInteger.o \
./src/ReverseString.o \
./src/SingleNumber.o \
./src/TwoSum.o \
./src/UnqiuePaths.o \
./src/main.o 

CPP_DEPS += \
./src/ClimbingStairs.d \
./src/CountPrimes.d \
./src/EuclideanDistance.d \
./src/FizzBuzz.d \
./src/GameOfLife.d \
./src/HK-BasicDataTypes.d \
./src/HK-ConditionalStatements.d \
./src/HK-ForLoop.d \
./src/HK-Functions.d \
./src/HK-InputAndOutput.d \
./src/HK-Pointers.d \
./src/JumpGame.d \
./src/LongestPalindromeInString.d \
./src/MedianOfTwoSortedArrays.d \
./src/Palindrome.d \
./src/PascalsTriangle.d \
./src/PowerOfThree.d \
./src/RemoveCharFromString.d \
./src/ReverseBits.d \
./src/ReverseInteger.d \
./src/ReverseString.d \
./src/SingleNumber.d \
./src/TwoSum.d \
./src/UnqiuePaths.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


