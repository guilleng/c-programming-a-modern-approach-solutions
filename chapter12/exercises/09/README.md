# Chapter 12 - Exercise 09

Write the following function:

```
double inner_product(const double *a, const double *b, int n);
```

`a` and `b` both point to arrays of length `n`. The function should return `a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]`. Use pointer arithmetic -- not subscripting -- to visit array elements.

---

```
double inner_product(const double *a, const double *b, int n)
{
    double accum;
    const double *p = a, *q = b;

    while ((p < a + n) && (q < b + n))
    {
        accum += *p++ * *q++;
    }

    return accum;
}
```
