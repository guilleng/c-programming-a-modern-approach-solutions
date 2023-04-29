CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

inventory: inventory.o readline.o quicksort.o
		$(CC) $(CFLAGS) -o inventory inventory.o readline.o quicksort.o

inventory.o: inventory.c inventory.h readline.h quicksort.h 
		$(CC) $(CFLAGS) -c inventory.c

readline.o: readline.c readline.h
		$(CC) $(CFLAGS) -c readline.c

quicksort.o: quicksort.c quicksort.h inventory.h
		$(CC) $(CFLAGS) -c quicksort.c 

clean:
		rm *.o inventory
