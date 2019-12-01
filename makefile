# -*- Makefile -*-
CC= gcc
AR= ar
OBJ_M= main.o
OBJ= myBank.o
FLAGS= -Wall -g

all: libmylib.so libmylib.a progmaind progmains 

progmains: $(OBJ_M) libmylib.a
	$(CC) $(FLAGS) -o progmains $(OBJ_M) libmylib.a

progmaind: $(OBJ_M) 
	$(CC) $(FLAGS) -o progmaind $(OBJ_M) ./libmylib.so

libmylib.so: $(OBJ)
	$(CC) -shared -o libmylib.so $(OBJ)

libmylib.a: $(OBJ)
	$(AR) -rcs libmylib.a $(OBJ)

myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c 

main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so progmains progmaind


