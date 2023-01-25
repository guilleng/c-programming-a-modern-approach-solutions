# Chapter 05 - Exercise 05

Is the following `if` statement legal?

```
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to `0`?

---

The expression in the parentheses of the `if` statement is valid. The `printf` statement is evaluated when `n` is `0`. The procedure can be outlined in a step by step fashion as: 

```
 n >= 1  <= 10
 0 >= 1  <= 10
   0     <= 10
         1
```

Furthermore, the printf statement is always executed regardless of the value of `n`.  
The expression `(n >= 1 <= 10)` is equivalent to: `(0 OR 1) <= 10`.
