# Chapter 14 - Exercise 01

Write parameterized macros that compute the following values.

(a) The cube of `x`.

(b) The remainder when `n` is divided by `4`.

(c) `1` if the product of `x` and `y` is less than `100`, `0` otherwise.


---

(a)
```C
#define CUBE(x)             ((x)*(x)*(x))
```

(b)
```C
#define REMAINDER_FOUR(n)   ((n) % 4)
```

(c)
```C
#define PRODUCT_GT_100(x,y) (((x)*(y)) > 100)
```
