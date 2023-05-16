CC=gcc
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

testclient: stackADT-testclient.o stackADT3.o 
		$(CC) $(CFLAGS) -o testclient stackADT-testclient.o stackADT3.o 

testclient.o: stackADT-testclient.c stackADT.h
		$(CC) $(CFLAGS) -c stackADT-testclient.o stackADT.h 

stackADT3.o: stackADT3.c stackADT.h
		$(CC) $(CFLAGS) -c stackADT3.c stackADT.h 
clean:
		rm *.o *.gch testclient
