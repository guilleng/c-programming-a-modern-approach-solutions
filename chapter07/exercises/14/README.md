# Chapter 07 - Exercise 14

Does the following statement always compute the fractional part of `f` correctly
(assuming that `f` and `frac_part` are `float` variables)?

```C
frac_part = f - (int) f;
```

If not, what's the problem?

---

Not always.  If the integer part of the floating-point number is too large to be
represented as type `int`, the behavior is undefined.

```C
float f = 3.4028235e+38;    // large float
frac_part = f - (int) f;    // cast float to int, undefined
```
