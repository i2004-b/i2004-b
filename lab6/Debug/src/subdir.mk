################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/intDLList.cpp \
../src/lab6.cpp \
../src/queue.cpp \
../src/stack.cpp 

CPP_DEPS += \
./src/intDLList.d \
./src/lab6.d \
./src/queue.d \
./src/stack.d 

OBJS += \
./src/intDLList.o \
./src/lab6.o \
./src/queue.o \
./src/stack.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/intDLList.d ./src/intDLList.o ./src/lab6.d ./src/lab6.o ./src/queue.d ./src/queue.o ./src/stack.d ./src/stack.o

.PHONY: clean-src

