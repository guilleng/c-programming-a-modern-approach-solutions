# Chapter 06 - Exercise 14

Find the error in the following program fragment and fix it.

```C
if (n % 2 == 0);
    printf("n is even\n");
```

---

The `null` statement (semicolon) following the if condition should be removed.

```
if (n % 2 == 0)
    printf("n is even\n");
```
