################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Code.cpp \
../CodeBreaker.cpp \
../CodeMaker.cpp \
../Game.cpp \
../Keys.cpp 

OBJS += \
./Code.o \
./CodeBreaker.o \
./CodeMaker.o \
./Game.o \
./Keys.o 

CPP_DEPS += \
./Code.d \
./CodeBreaker.d \
./CodeMaker.d \
./Game.d \
./Keys.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


