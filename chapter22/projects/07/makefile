CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

rle: rle.o run-length-encoding.o
	$(CC) $(CFLAGS) -o rle rle.o run-length-encoding.o

rle.o: rle.c run-length-encoding.h
	$(CC) $(CFLAGS) -c rle.c
	
run-length-encoding.o: run-length-encoding.c run-length-encoding.h
	$(CC) $(CFLAGS) -c run-length-encoding.c 

clean:
	rm *.o rle
