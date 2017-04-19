#makefile

CC=g++

INCLUDE=-I. -Wall

EXEC=a 

U: main.cc randspeech.h
	$(CC) $(INCLUDE) main.cc randspeech.cc -o $(EXEC)


