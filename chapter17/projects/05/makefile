CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

sortwords: sortwords.o readline.o
	$(CC) $(CFLAGS) -o sortwords sortwords.o readline.o

sortwords.o: sortwords.c readline.h
	$(CC) $(CFLAGS) -c sortwords.c

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c readline.c

clean:
	rm *.o sortwords
