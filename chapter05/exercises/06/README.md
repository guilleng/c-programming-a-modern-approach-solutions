# Chapter 05 - Exercise 06

Is the following `if` statement legal?

```
if (n == 1 - 10)
    prinf("n is between 1 and 10\n");
```

If so, what does it do when `n` is equal to `5`?

---

The `if` statement is legal.  
Its condition is setted up in such a way that it evaluates first the subtraction
`1 - 10`.  Then its value is compared to `n`. For `n` storing `5` the comparison
evaluates to false, not executing the call to `printf`.  

Furthermore, the condition only becomes true for `n` storing `-9`.  
