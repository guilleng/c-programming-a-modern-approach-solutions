# Chapter 07 - Exercise 13

Assume that a program contains the following declarations:

```C
char c = '\1';
short s = 2;
int i = -3;
long m = 5;
float f = 6.5f;
double d = 7.5;
```

Give the value and the type of each expression listed below.

(a) `c * i`

(b) `s + m`

(c) `f / c`

(d) `d / s`

(e) `f - d`

(f) `(int) f`

---

(a)
Evaluation yields `-3`. The type of the expression is `int`.
After the `char` variable gets promoted to `int` no further conversions are
necessary.

(b) 
Evaluation yields `7`, type `long`. 
After going through integer promotion, the variable `s` is still narrower than
`m`, and is then promoted to its type.

(c)
Evaluation yields `6.5`, type `float`.
The `char` variable is converted to `float`.

(d)
Evaluation yields `3.75`, type `double`.

(e)
Evaluation yields `-1`, type `double`.
The narrower operand is promoted.

(f)
Evaluation yields `6`, type `int`.
The cast operator converts the value of `f` to an integer dropping its
fractional part. 
