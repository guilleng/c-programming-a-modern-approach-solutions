# Chapter 23 - Exercise 02

(C99) Write the following function: 

```C
double evaluate_polynomial(double a[], int n, double x);
```

The function should return the value of the polynomial `a_n x^n + a_n–1 x^n–1 +
... + a_0` , where the `a_i`'s are stored in corresponding elements of the array
`a`, which has length `n + 1`.  Have the function use Horner’s Rule to compute
the value of the polynomial: `((...((a_n x + a_n–1 )x + a_n–2 )x + ...)x + a_1
)x + a_0` Use the `fma` function to perform the multiplications and additions.

---


```C
double evaluate_polynomial(double a[], int n, double x)
{
    double ret = a[n - 1];
    int i;
    
    for (i = n; i > 0; i--) 
    {
        ret = fma(ret, x, a[i]);
    }
    
    return ret;
}
```
