# Chapter 09 - Exercise 19

Consider the following "mystery" function:

```
void pb(int n)
{
    if (n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
```

Trace the execution of the function by hand. Then write a program that calls the function, passing it a number entered by the user. What does the function do?

---

1. For `n = 0`: The selection statement do not execute its body, program control jumps to main.  

2. For `n = 1`: As `1 != 0` is true, `pb(1 / 2)` is called. This call is the same as (1) and the selection statement do not execute its body. Program control jumps to the previous function call, which evaluates `putchar('0' + 1 % 2)`. This statements prints the character `1`.  

3. For `n = 2`:  As `2 != 0` is true, `pb(2 / 2)` is called. This call is the same as (2) and the pattern becomes evident.  

The function recursively divides a number by 2, the evaluation of the quotient remains on the stack frame until it evaluates to `0`. The program then returns the stack frames printing either a `0` or `1` depending on the remainder of the division of `n` by `2` at that particular stack frame.

```
// Visualization of the stack frame when the function is called with the value 5

pb(5)
    pb(2)
        pb(1)
            pb(0)
        putchar('0' + 1 % 2)
    putchar('0' + 2 % 2)
putchar('0' + 5 % 2)

OUTPUT: 101
```
