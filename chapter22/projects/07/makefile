CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

rle: main.o run-length-encoding.o
	$(CC) $(CFLAGS) -o rle main.o run-length-encoding.o

main.o: main.c run-length-encoding.h
	$(CC) $(CFLAGS) -c main.c
	
run-length-encoding.o: run-length-encoding.c run-length-encoding.h
	$(CC) $(CFLAGS) -c run-length-encoding.c 

clean:
	rm *.o rle
