# Chapter 12 - Exercise 07

Write the following function:

```C
bool search(const int a[], int n, int key);
```

`a` is an array to be searched, `n` is the number of elements in the array, and
key is the search key.  `search` should return `true` if `key` matches some
element of `a`, and `false` if it doesn't.  Use pointer arithmetic -- not
subscripting -- to visit array elements.


---

```C
bool search(const int a[], int n, int key)
{
    const int *p = a;
    while (p < a + n)
    {
        if (key == *p++)
        {
            return true;
        }
    }

    return false;
}
```
