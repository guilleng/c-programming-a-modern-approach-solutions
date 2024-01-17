# Chapter 11 - Exercise 08

Write the following function:

```C
int *find_largest(int a[], int n);
```

When passed an array a of length `n`, the function will return a pointer to the
array's largest element.


---

```C
int *find_largest(int a[], int n)
{
    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (a[j] > a[i])
        {
            i = j;
        }
    }

    return &a[i];
}
```
