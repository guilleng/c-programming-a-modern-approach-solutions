# Chapter 05 - Exercise 05

Is the following `if` statement legal?

```C
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to `0`?

---

The `if` statement is valid and the `printf` statement is evaluated when `n` is
`0`.

The conditional evaluation for `n = 10`, outlined in a step by step fashion is:

```C
 n >= 1 <= 10
10 >= 1 <= 10
   1    <= 10
         1
```

Furthermore, the `printf` statement is always executed regardless of the value
of `n`.  
The expression `(n >= 1 <= 10)` is equivalent to: `(0 OR 1) <= 10`, which is
always true.
