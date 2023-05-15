CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

queueclient: queueclient.o queue-array.o 
	$(CC) $(CFLAGS) -o queueclient queueclient.o queue-array.o 

queueclient.o: queueclient.c ../queue.h
	$(CC) $(CFLAGS) -c queueclient.c ../queue.h

queue-array.o: queue-array.c ../queue.h
	$(CC) $(CFLAGS) -c queue-array.c ../queue.h

clean:
	rm *.o queueclient ../*.gch
