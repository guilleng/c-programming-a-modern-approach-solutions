CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c99

rpn: rpn.o stack.o tokens.o
	$(CC) $(CFLAGS) -o rpn rpn.o stack.o tokens.o

rpn.o: rpn.c stack.h tokens.h
	$(CC) $(CFLAGS) -c rpn.c

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c
	
tokens.o: tokens.c tokens.h
	$(CC) $(CFLAGS) -c tokens.c

clean:
	rm *.o rpn
