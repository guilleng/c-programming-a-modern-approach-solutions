CC=gcc
CFLAGS= -Wall -Wextra -Wpedantic -std=c89
LDFLAGS= -lm

quadratic: 01.o
	$(CC) -o quadratic 01.o $(CFLAGS) $(LDFLAGS)

01.o: 01.c
	$(CC) -c 01.c $(CFLAGS)

clean:
	rm 01.o quadratic
