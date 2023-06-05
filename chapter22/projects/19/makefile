CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

convertlineendings: convertlineendings.o lineendings.o
		$(CC) $(CFLAGS) -o convertlineendings convertlineendings.o lineendings.o

lineendings.o: lineendings.c lineendings.h
		$(CC) $(CFLAGS) -c lineendings.c

clean:
		rm *.o convertlineendings
