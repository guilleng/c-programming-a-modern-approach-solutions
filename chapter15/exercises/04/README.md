# Chapter 15 - Exercise 04

Assume that `debug.h` is a header file with the following contents:

```
#ifdef DEBUG
#define PRINT_DEBUG(n) printf("Value of " #n ": %d\n", n)
#else
#define PRINT_DEBUG(n)
#endif
```

Let `testdebug.c` be the following source file:

```
#include <stdio.h>

#define DEBUG
#include "debug.h"

int main(void)
{
    int i = 1, j = 2, k = 3;

#ifdef DEBUG
    printf("Output if DEBUG is defined:\n");
#else
    printf("Output if DEBUG is not defined:\n");
#endif

    PRINT_DEBUG(i);
    PRINT_DEBUG(j);
    PRINT_DEBUG(k);
    PRINT_DEBUG(i + j);
    PRINT_DEBUG(2 * i + j - k);

    return 0;
}
```

(a)
What is the output when the program is executed?  

(b)
What is the output if the `#define` directive is removed from `testdebug.c`?  

(c)
Explain why the output is different in parts (a) and (b).  

(d)
Is it necessary for the DEBUG macro to be defined _before_ `debug.h` is included in order for `PRINT_DEBUG` to have the desired effect? Justify your answer.  

---

(a)
To determine the output of the program, let's first observe an outline of the preprocessed file:  

```
/* stdio.h lines are placed here */

/* the #define DEBUG line triggers the following conditional definition /*

#define PRINT_DEBUG(n) printf("Value of " #n ": %d\n", n)




int main(void)
{
    int i = 1, j = 2, k = 3;


/* the #define DEBUG line triggers the following conditional definition /*
    printf("Output if DEBUG is defined:\n");


/* the PRINT_DEBUG calls are expanded to the following statemets */
    printf("Value of " "i" ": %d\n", i);
    printf("Value of " "j" ": %d\n", j);
    printf("Value of " "k" ": %d\n", k);
    printf("Value of " "i + j" ": %d\n", i + j);
    printf("Value of " "2 * i + j - k" ": %d\n", "2 * i + j - k");

    return 0;
}
```

Output:
```
Output if DEBUG is defined:
Value of i: 1
Value of j: 2
Value of k: 3
Value of i + j: 3
Value of 2 * i + j - k: 1
```

(b)
```
/* stdio.h lines are placed here */


/* the absence of the #define DEBUG line triggers the following conditional definition /*


#define PRINT_DEBUG(n)


int main(void)
{
    int i = 1, j = 2, k = 3;

/* the absence of the #define DEBUG line triggers the following conditional definition /*


    printf("Output if DEBUG is not defined:\n");

/* the PRINT_DEBUG calls are expanded to the following statemets */
    i;
    j;
    k;
    i + j;
    2 * i + j - k;

    return 0;
}
```

Output:  
```
Output if DEBUG is not defined:
```

(c) 
Defining the macro `DEBUG` causes the code to expand differently through conditional compilation. The specific details can be found in answers (a) and (b).  

(d) 
Yes, because the preprocessor processes directives in a top-to-bottom manner. To trigger the expansion of `PRINT_DEBUG` into a `printf` call, `DEBUG` needs to be defined before the `#ifdef` check present in `"debug.h"`.  
