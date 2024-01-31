# Chapter 24 - Exercise 04

(a) Write a “wrapper” function named `try_math_fcn` that calls a math function
    (assumed to have a `double` argument and return a `double` value) and then
    checks whether the call succeeded.  Here’s how we might use `try_math_fcn`:

```C
y = try_math_fcn(sqrt, x, "Error in call of sqrt");
```

If the call `sqrt(x)` is successful, `try_math_fcn` returns the value computed
by sqrt.

If the call fails, `try_math_fcn` calls `perror` to print the message `Error in
call of sqrt`, then calls `exit` to terminate the program.

(b) Write a macro that has the same effect as `try_math_fcn` but builds the
    error message from the function’s name:

```C
y = TRY_MATH_FCN(sqrt, x);
```

If the call of `sqrt` fails, the message will be `Error in call of sqrt`.
_Hint_: Have `TRY_MATH_FCN` call `try_math_fcn`.


---

(a)
```C
double try_math_fcn(double (fcn)(double), double x, const char *s)
{
    double ret;
    errno = 0; 
    ret = fcn(x);
    if (errno != 0)
    {
        perror(s);
        exit(EXIT_FAILURE);
    }
    return ret;
}
```

(b)
```C
#define TRY_MATH_FCN(f, n)      try_math_fcn((f),(n), "Error in call of "#f)
```
