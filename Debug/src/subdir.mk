################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AbsPlayer.cpp \
../src/AlphaCat.cpp \
../src/Code.cpp \
../src/CodeBreaker.cpp \
../src/CodeMaker.cpp \
../src/Game.cpp \
../src/HumanPlayer.cpp \
../src/Keys.cpp 

OBJS += \
./src/AbsPlayer.o \
./src/AlphaCat.o \
./src/Code.o \
./src/CodeBreaker.o \
./src/CodeMaker.o \
./src/Game.o \
./src/HumanPlayer.o \
./src/Keys.o 

CPP_DEPS += \
./src/AbsPlayer.d \
./src/AlphaCat.d \
./src/Code.d \
./src/CodeBreaker.d \
./src/CodeMaker.d \
./src/Game.d \
./src/HumanPlayer.d \
./src/Keys.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"./src/" -I"./src/impl" -I"../src" -I"../src/impl" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


