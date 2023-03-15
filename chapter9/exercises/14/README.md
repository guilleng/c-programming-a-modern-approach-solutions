# Chapter 09 - Exercise 14

The following function is supposed to return `true` if any element of the array a has the value `0` and `false` if all elements are nonzero. Sadly, it contains an error. Find the error and show how to fix it:

```
bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        else
            return false;
}
```

---

Tracking the procedure of this code, is noted:  

1. The selection statement of the `for` loop body is set to be evaluated at __most__ `n` times. (The number of items the integer array `a` contains).  
2. The semantics of an `if` expression followed by an `else` clause dictates that the expression `a[i] == 0` is evaluated. If its value is non-zero, the function returns `true`. If it value is zero, it returns `false`. 

The function returns `true` if any element of the array has the zero value, and `false` (prematurely) if any element of the array has a nonzero value.  

To produce the desired output the `else` clause should be removed. It is only safe to return `false` after all the array items have been checked for equality with `0` and failed.  

```
bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
            return true;
    }

    return false;
}
```
