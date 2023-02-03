# Chapter 05 - Exercise 06

Is the following `if` statement legal?

```
if (n == 1 - 10)
    prinf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to `5`?

---

The `if` statement is legal.  
Its condition evaluates first the subtraction `1 - 10` which yields `-9`. Then compares this value to `n`. For `n` storing `5` the comparison evaluates to false, not executing the call to `printf`.  

Furthermore, the `printf` call is evaluated only for `n` storing `-9`.  
