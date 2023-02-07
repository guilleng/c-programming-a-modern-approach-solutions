# Chapter 06 - Exercise 14

Find the error in the following program fragment and fix it.

```
if (n % 2 == 0);
    printf("n is even\n");
```

---

If this program's purpose is to evaluate the `printf` statement for even values of `n`, the `Null` statement following the `if` selection statement should not be present.   

```
if (n % 2 == 0)
    printf("n is even\n");
```
