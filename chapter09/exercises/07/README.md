# Chapter 09 - Exercise 07

Suppose that the function `f` has the following definition:

```C
int f(int a, int b) { ... }
```

Which of the following statements are legal? Assume that `i` has type `int` and
`x` has type `double`.

(a) `i = f(83, 12);`

(b) `x = f(83, 12);`

(c) `i = f(3.15, 9.28);`

(d) `x = f(3.15, 9.28);`

(e) `f(83, 12);`


---

All the statements are perfectly legal. Some observations:

All assignment statements require evaluation of the function call at the right
hand side upfront.

(a)
The type of the arguments matches the type of the parameters. Normal behavior,
no conversions needed.

For the assignment the type of the lvalue `i` is the same as the return type of
the rvalue `f`. No conversion performed. 

(b)
The type of the arguments matches the type of the parameters.

The type of `x` mismatches the return type of `f`, so its returned value is cast
to `double`.

(c)
The type of the arguments and parameters do not match.  Argument conversions
apply.  Because the type of the parameters is narrower than the type of the
arguments, their decimal parts are dropped.  The call behaves as `f(3, 9)`.

For the assignment no conversion is performed.

(d)
The type of the arguments and parameters don't match.  Because the type of the
parameters is narrower than the type of the arguments, their decimal parts are
dropped.  The call behaves as `f(3, 9)`.

The type of `x` mismatches the return type of `f`, so its returned value is cast
to `double`.

(e)
The type of the arguments matches the type of the parameters.  As the function
call is an rvalue statement, its returned value is discarded.  Nonetheless,
there exists the possibility that side effects from statements within the
function body modify the program execution environment.
