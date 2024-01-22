CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

main: main.o dialing_codes.o user_input.o
		$(CC) $(CFLAGS) -o main main.o dialing_codes.o user_input.o

main.o: main.c dialing_codes.h user_input.h
		$(CC) $(CFLAGS) -c main.c

dialing_codes.o: dialing_codes.c dialing_codes.h
		$(CC) $(CFLAGS) -c dialing_codes.c

user_input.o: user_input.c user_input.h
		$(CC) $(CFLAGS) -c user_input.c

clean:
		rm *.o main
