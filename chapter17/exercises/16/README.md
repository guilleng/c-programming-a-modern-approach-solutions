# Chapter 17 - Exercise 16

Write the following function. The call `sum(g, i, j)` should return `g(i) + ... + g(j)`.  

```
int sum(int (*f)(int), int start, int end);
```

---

```
int sum(int (*f)(int), int start, int end)
{
    int acc = 0;
    while (start < end)
    {
        acc += (*f)(start);
        start++;
    }
    return acc;
}
```
