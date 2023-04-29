CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

dates: dates.o user_input.o
		$(CC) $(CFLAGS) -o dates dates.o user_input.o

dates.o: dates.c user_input.h
		$(CC) $(CFLAGS) -c dates.c

user_input.o: user_input.c user_input.h
		$(CC) $(CFLAGS) -c user_input.c

clean:
		rm *.o dates
