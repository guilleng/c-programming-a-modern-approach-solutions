# Chapter 11 - Exercise 04

Write the following function:

```C
void swap(int *p, int *q);
```

When passed the addresses of two variables, swap should exchange the values of
the variables:

```C
swap(&i, &j);    /* exchanges values of i and j */
```


---

```C
void swap(int *p, int *q)
{
    int temporary = *p;
    *p = *q;
    *q = temporary;
    return;
}
```
