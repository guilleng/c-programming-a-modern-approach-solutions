# Chapter 05 - Exercise 06

Is the following `if` statement legal?

```
if (n == 1 - 10)
    prinf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to `5`?

---

The statement is legal. The expression between parentheses after the `if` statement evaluates first the substraction `1 - 10` which yields `-9`, and then compares this value to `n`. For `n` equal to `5` the comparison evaluates to false, not executing the call to `printf`.  

Furthermore, the only value of `n` that will make the `printf` call get evaluated is `-9`.
