# Chapter 17 - Exercise 15

Show the output of the following program and explain what it does.  

```
#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

int main(void)
{
    printf("Answer: %d\n", f1(f2));
    return 0;
}

int f1(int (*f)(int))
{
    int n = 0;
    while ((*f)(n)) n++;
    return n;
}

int f2(int i)
{
    return i * i + i - 12;
}
```

---

First, a short verbal description of the functions defined in this program:

`f1` takes a pointer to a function with return type integer that takes one integer argument. It returns an integer.  
`f2` takes an integer and returns an arithmetic computation which adds -12, the integer parameter, and its square.  

The call `f1(f2))` in the `printf` function triggers the following procedure:  

1. `f1` initializes a variable `n` to `0`.  
2. The condition of the `while` loop is evaluated, `(*f)(n)` dereferences function pointer `f` and calls it it with `n` as argument. Thus `f2(0) = -12`.  
3. `n` is incremented.   
4.  The condition of the loop is evaluated again.  

The loop continues until the function `f2` returns a value of `0`. In this case, the loop exits when `n` takes a value of `3`. Therefore, the output of this program is:

```
Answer: 3
```
