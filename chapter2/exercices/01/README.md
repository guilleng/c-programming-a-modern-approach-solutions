# Chapter 02, Exercise 01

Create and run Kernighan and Ritchie's famous "hello, world" program. Do you get a warning message from the compiler? If so, what's needed to make it go away?
```
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

---

We procede at compiling with different levels arguments for warning messages:  
`gcc code.c` Issues no warning.  
`gcc code.c -W` Issues no warning.  
`gcc code.c -W -Wall` Issues no warning.    
`gcc code.c -W -Wall -pedantic` Issues no warning.    
`gcc code.c -W -Wall -pedantic -ansi` __warning:__ control reaches end of non-void function.    
`gcc code.c -W -Wall -pedantic -ansi -std=c89` __warning:__ control reaches end of non-void function.  
`gcc code.c -W -Wall -pedantic -ansi -std=c99` Issues no warning.  

The program lacks a `return` statement on the `main` function, and that is the cause of the warning message.  
According to the C99 standard, the return statement is optional only for program termination.[1](https://gcc.gnu.org/bugzilla//show_bug.cgi?id=53232)  
