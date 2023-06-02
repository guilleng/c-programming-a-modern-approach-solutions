CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

caesar: caesar.o x_readline.o
	$(CC) $(CFLAGS) -o caesar caesar.o x_readline.o

caesar.o: x_readline.h
	$(CC) $(CFLAGS) -c caesar.c

x_readline.o: x_readline.c x_readline.h
	$(CC) $(CFLAGS) -c x_readline.c

clean:
	rm *.o caesar
