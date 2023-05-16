CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

main: main.o stackADT3.o tokens.o
	$(CC) $(CFLAGS) -o main main.o stackADT3.o tokens.o

main.o: main.c stackADT.h
	$(CC) $(CFLAGS) -c main.c

stackADT3.o: stackADT3.c stackADT.h
	$(CC) $(CFLAGS) -c stackADT3.c

tokens.o: tokens.c tokens.h
	$(CC) $(CFLAGS) -c tokens.c

clean:
	rm *.o main
