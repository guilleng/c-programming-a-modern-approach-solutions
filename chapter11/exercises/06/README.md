# Chapter 11 - Exercise 06

Write the following function:

```C
void find_two_largest(int a[], int n, int *largest, int *second_largest);
```

When passed an array a of length `n`, the function will search a for its largest
and second-largest elements, storing them in the variables pointed to by largest
and second-largest respectively.


---

The function assumes that the array `a` has a minimum size of 2.  If the element
in the array with the largest absolute value is repeated, both `largest` and
`second_largest` will store the same value.

```C
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest        = a[0] > a[1] ? a[0] : a[1];
    *second_largest = a[0] < a[1] ? a[0] : a[1];

    for (int i = 2; i < n; i++)
    {
        if (a[i] >= *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        if (a[i] > *second_largest && a[i] != *largest)
        {
            *second_largest = a[i];
        }
    }
    return;
}
```
