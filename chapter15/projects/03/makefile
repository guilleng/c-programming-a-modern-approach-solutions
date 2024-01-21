# Since `make` just pushes whatever is in a rule to bash, the hash symbol makes 
# each line preceded by it a comment.

# The line below sets a shell variable `CC` to the string "gcc". This increases 
# portability.  If someone desires to compile this code using a different 
# compiler, it only needs to change its value for the desired program name.
CC=gcc

# The following line sets a variable `CFLAGS` to the compiler flags that will be 
# used.  These flags enable additional warnings and specify that the code should 
# be compiled according to the C89 standard.
CFLAGS= -Wextra -Wall -Wpedantic -std=c89

# The first line of a Makefile rule specifies the target and its dependencies, 
# the second line specifies the commands to be executed to build the target. 
#
# The $() notation is Bash's command substitution.  It is used to substitute the 
# values of the variables `CC` and `CFLAGS` into the command line. 
#
# The `-o` flag specifies the name of the output file. 
# The `-c` flag indicates that the source files should be compiled or assembled, 
# but not linked.

qsort: qsort.o quicksort.o
	$(CC) $(CFLAGS) -o qsort qsort.o quicksort.o

qsort.o: qsort.c quicksort.h
	$(CC) $(CFLAGS) -c qsort.c

quicksort.o: quicksort.c quicksort.h
	$(CC) $(CFLAGS) -c quicksort.c

# The clean target only specifies commands to be executed. 
# It removes all files with the `.o` extension and the `qsort` executable using 
# the UNIX `rm` program.  This is a common idiom used to perform a 'build from 
# scratch'.
clean:
	rm *.o qsort
