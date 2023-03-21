# Chapter 11 - Exercise 04

Write the following function:

```
void swap(int *p, int *q);
```

When passed the addresses of two variables, swap should exchange the values of the variables:

```
swap(&i, &j);    /* exchanges values of i and j */
```

---

```
void swap(int *p, int *q);

...

void swap(int *p, int *q)
{
    int temporary = *p;
    *p = *q;
    *q = temporary;
    return;
}
```
