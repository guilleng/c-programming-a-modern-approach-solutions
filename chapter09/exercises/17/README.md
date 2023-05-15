# Chapter 09 - Exercise 17

Rewrite the `fact` function so that it's no longer recursive.

---

The `fact` function from Section 9.6:

```
int fact(int n)
{
    if (n <= 1)
        return 1;
    else 
        return n * fact(n - 1);
}
```

Non-recursive version:  

```
int fact(int n)
{
    int factorial = 1;

    for(int i = n; i > 0; i--)
    {
        factorial *= i;
    }

    return factorial;
}
```
