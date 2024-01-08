# Chapter 02 - Exercise 01

Create and run Kernighan and Ritchie's famous "hello, world" program. Do you get a warning message from the compiler? If so, what's needed to make it go away?

```C
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

---

Outputs for different GCC compilations: 

`gcc code.c` Issues no warning.  
`gcc code.c -W` Issues no warning.  
`gcc code.c -W -Wall` Issues no warning.    
`gcc code.c -W -Wall -pedantic` Issues no warning.    
`gcc code.c -W -Wall -pedantic -ansi -std=c89` __warning:__ control reaches end of non-void function.  
`gcc code.c -W -Wall -pedantic -ansi -std=c99` Issues no warning.  

Lacking a `return` statement in the `main` function is C99 compliant, but is not allowed under the C89 standard.  
