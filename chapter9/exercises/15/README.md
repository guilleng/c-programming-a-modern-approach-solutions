# Chapter 09 - Exercise 15

The following (rather confusing) function finds the median of three numbers. Rewrite the function so that it has just one return statement.

```
double median(double x, double y, double z)
{
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
```

---

Given that the median is the value separating the higher half from the lower half of a data sample, a simplified version of the function is:  

```
double median(double x, double y, double z)
{
    double median = ((x >= y && z <= y) || (z >= y && x <= y)) ? y :      x;
    return          ((x >= z && y <= z) || (y >= z && x <= z)) ? z : median;
}
```
