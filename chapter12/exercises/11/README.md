# Chapter 12 - Exercise 11

Modify the `find_largest` function so that it uses pointer arithmetic -- not subscripting -- to visit array elements.

---

```
int *find_largest(int *a, int n)
{
    int *p, *largest;

    for (p = a, largest = a; p < a + n; p++)
    {
        if (*p > *largest)
        {
            largest = p;
        }
    }
    return largest;
}
```
