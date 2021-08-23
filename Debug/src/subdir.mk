################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Card.cpp \
../src/Deck.cpp \
../src/Desk.cpp \
../src/LaBrisca.cpp \
../src/Player.cpp 

OBJS += \
./src/Card.o \
./src/Deck.o \
./src/Desk.o \
./src/LaBrisca.o \
./src/Player.o 

CPP_DEPS += \
./src/Card.d \
./src/Deck.d \
./src/Desk.d \
./src/LaBrisca.d \
./src/Player.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


