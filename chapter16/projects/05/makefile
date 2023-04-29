CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

times: times.o flight_times.o user_input.o
		$(CC) $(CFLAGS) -o times times.o flight_times.o user_input.o

times.o: times.c flight_times.h user_input.h
		$(CC) $(CFLAGS) -c times.c

flight_times.o: flight_times.c flight_times.h
		$(CC) $(CFLAGS) -c flight_times.c

user_input.o: user_input.c user_input.h
		$(CC) $(CFLAGS) -c user_input.c

clean:
		rm *.o times
