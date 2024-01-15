# Chapter 09 - Exercise 16

Condense the `fact` function in the same way we condensed `power`.


---

The `fact` function from Section 9.6:

```C
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
```

Condensed version:

```C
int fact(int n)
{
    return (n <= 1) ? 1 : ( n * fact(n - 1) );
}
```
