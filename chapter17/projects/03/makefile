CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

inventory: inventory2.o readline.o
		$(CC) $(CFLAGS) -o inventory inventory2.o readline.o

inventory2.o: inventory2.c readline.h
		$(CC) $(CFLAGS) -c inventory2.c

readline.o: readline.c readline.h
		$(CC) $(CFLAGS) -c readline.c

clean:
		rm *.o inventory
