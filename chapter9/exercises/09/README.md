# Chapter 09 - Exercise 09

What will be the output of the following program?

```
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

---

The code is deceiving. At first sight it seems to be swapping the values of two integer variables, but its output will be:  

```
i = 1, j = 2
```

The reason is that in C arguments are passed by value and the function `swap` does not have any statement modifying the execution environment in scope of the main function.  
