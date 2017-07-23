################## Project Path ##################

srcdir = src
objdir = obj 
bindir = bin 

################ GCC Compiler Option ###############
CC = gcc 
CFLAGS = -Wall -lrt -g -c -Wimplicit-function-declaration

################ GNU Linux Command #################
RM = rm 
MV = mv 
CP = cp 
MKDIR = mkdir 

################ Target and Objects Vars ###########
TARGET = \
	time \
	clock \
	times \
	gettime_of_day \
	runtime_comp

	
OBJS = $(SRCS:.c=.o) 
#OBJS = $(subst .c,.o$(wildcard *.c))

################ C source files #################
HDRS = \
	common.h
	
#SRCS = $(wildcard *.c)
SRCS = \
	time.c \
	clock.c \
	times.c \
	gettime_of_day.c \
	clock_gettime.c 
	
################ build target rules ##############
all: $(TARGET)

xxx:__prebuild__ __build__ __postbuild__ 
	@echo -----------------------------------------
	@echo *****************Run********************
	@echo -----------------------------------------
	

__prebuild__:
	@echo ---------------------------------------------
	@echo *****************Build Started***************
	
__build__: __opts__ $(OBJS)
	echo ---------------------------------------------
	
	
__postbuild__:
	@echo --------------------------------------------
	@echo *************** Build Finished *************
	
$(OBJS):
%.o:%.c 
	@echo Compiling $<
	@$(CC) -o $@ $(CFLAGS) $< 
	
	
__opts__:
	@echo *** Compiler: $(CC)
	@echo *** Compiler Options: $(CFLAGS)
	@echo --------------------------------------------
	@echo ************* Code Generation --------------
	
	
	
	
	
	
	