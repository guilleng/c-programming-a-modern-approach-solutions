# Chapter 14 - Exercise 13

(a) Show what the following program will look like after preprocessing.  You may
ignore any lines added to the program as a result of including the `<stdio.h>`
header.

```C
#include <stdio.h>

#define N 100

void f(void);

int main(void)
{
    f();
#ifdef N
#undef N
#endif
    return 0;
}

void f(void)
{
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefined\n");
#endif
}
```

(b) 
What will be the output of this program?


---

(a) Ignoring the `<stdio.h>` header expansion, the preprocessed source code is: 

```C
void f(void);

int main(void)
{
    f();



    return 0;
}

void f(void)
{



    printf("N is undefined\n");

}
```

(b) Output: `"N is undefined\n"`.
