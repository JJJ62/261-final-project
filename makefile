CC=gcc
CFLAGS=-Wall -std=c99

all: wampus

wampus: main.o functions.o 
	gcc -g -Wall -std=c99 -o wampus main.o functions.o 

main.o: main.c 
	gcc -g -Wall -std=c99 -c main.c

functions.o: functions.c
	gcc -g -Wall -std=c99 -c functions.c

clean:
	-rm *.o

cleanall: clean
	-rm wampus
