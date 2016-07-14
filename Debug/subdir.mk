################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AlphaCat.cpp \
../Code.cpp \
../CodeBreaker.cpp \
../CodeMaker.cpp \
../Game.cpp \
../HumanPlayer.cpp \
../Keys.cpp 

OBJS += \
./AlphaCat.o \
./Code.o \
./CodeBreaker.o \
./CodeMaker.o \
./Game.o \
./HumanPlayer.o \
./Keys.o 

CPP_DEPS += \
./AlphaCat.d \
./Code.d \
./CodeBreaker.d \
./CodeMaker.d \
./Game.d \
./HumanPlayer.d \
./Keys.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


