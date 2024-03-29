# Chapter 12 - Exercise 12

Write the following function:

```C
void find_two_largest(const int *a, int n, int *largest, int *second_largest);
```

`a` points to an array of length `n`.  The function searches the array for its
largest and second-largest elements, storing them in the variables pointed to by
largest and `second_largest`, respectively.  Use pointer arithmetic -- not
subscripting -- to visit array elements.


---

If the array has size 1 or the element in the array with the largest absolute
value is repeated, both `largest` and `second_largest` will store the same
value. 

```C
void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *p;
    *largest = *second_largest = *a;

    for (p = a; p < a + n; p++)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        }
        else if (*p > *second_largest)
        {
            *second_largest = *p;
        }
    }

    return;
}
```
