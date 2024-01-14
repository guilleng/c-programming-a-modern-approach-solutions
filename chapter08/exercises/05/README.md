# Chapter 08 - Exercise 05

The Fibonacci numbers are `0, 1, 1, 2, 3, 5, 8, 13, ...`, where each number is
the sum of the two preceding numbers.  Write a program fragment that declares an
array named `fib_numbers` of length `40` and fills the array with the first `40`
Fibonacci numbers.  __Hint__: Fill in the first two numbers individually, then
use a loop to compute the remaining numbers.


---

```C
#define N 40
...
int fib_numbers[N] = { 0, 1 };

for(int i = N; i < ( sizeof(fib_numbers) / sizeof(fib_numbers[0]) ); i++)
{
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
}
```
