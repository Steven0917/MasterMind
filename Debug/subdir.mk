################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AbsCodeBreakerImpl.cpp \
../AbsCodeMakerImpl.cpp \
../AlphaCat.cpp \
../BaseCodeMakerImpl.cpp \
../Code.cpp \
../CodeBreaker.cpp \
../CodeMaker.cpp \
../Game.cpp \
../HumanCodeBreakerImpl.cpp \
../HumanCodeMakerImpl.cpp \
../HumanPlayer.cpp \
../Keys.cpp 

OBJS += \
./AbsCodeBreakerImpl.o \
./AbsCodeMakerImpl.o \
./AlphaCat.o \
./BaseCodeMakerImpl.o \
./Code.o \
./CodeBreaker.o \
./CodeMaker.o \
./Game.o \
./HumanCodeBreakerImpl.o \
./HumanCodeMakerImpl.o \
./HumanPlayer.o \
./Keys.o 

CPP_DEPS += \
./AbsCodeBreakerImpl.d \
./AbsCodeMakerImpl.d \
./AlphaCat.d \
./BaseCodeMakerImpl.d \
./Code.d \
./CodeBreaker.d \
./CodeMaker.d \
./Game.d \
./HumanCodeBreakerImpl.d \
./HumanCodeMakerImpl.d \
./HumanPlayer.d \
./Keys.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


