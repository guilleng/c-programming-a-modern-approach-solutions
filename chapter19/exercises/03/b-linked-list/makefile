CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

queueclient: queueclient.o queue-linked-list.o 
	$(CC) $(CFLAGS) -o queueclient queueclient.o queue-linked-list.o 

queueclient.o: queueclient.c ../queue.h
	$(CC) $(CFLAGS) -c queueclient.c ../queue.h

queue-linked-list.o: queue-linked-list.c ../queue.h
	$(CC) $(CFLAGS) -c queue-linked-list.c ../queue.h

clean:
	rm *.o queueclient ../*.gch
