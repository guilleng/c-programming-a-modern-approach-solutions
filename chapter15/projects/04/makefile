CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

remind: remind.o readline.o
	$(CC) $(CFLAGS) -o remind remind.o readline.o

remind.o: remind.c readline.h
	$(CC) $(CFLAGS) -c remind.c

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c readline.c

clean:
	rm *.o remind
