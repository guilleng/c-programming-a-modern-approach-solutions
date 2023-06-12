CC=gcc
CFLAGS= -Wall -Wextra -Wpedantic -std=c89
LDFLAGS= -lm

money: 05.o
	$(CC) -o money 05.o $(CFLAGS) $(LDFLAGS)

05.o: 05.c
	$(CC) -c 05.c $(CFLAGS)

clean:
	rm 05.o money
