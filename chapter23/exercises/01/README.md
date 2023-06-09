# Chapter 23 - Exercise 01

Extend the `round_nearest` function so that it rounds a floating-point number `x` to `n` digits after the decimal point. For example, the call `round_nearest(3.14159, 3)` would return 3.142. _Hint_: Multiply x by 10^n, round to the nearest integer, then divide by 10^n. Be sure that your function works correctly for both positive and negative values of x.

---

```
double round_nearest(double x, int digits)
{
    x *= pow(10.0, digits);  
    x = (x < 0.0) ? ceil(x - 0.5) : floor(x + 0.5);
    return x /= pow(10.0, digits);
}
```
