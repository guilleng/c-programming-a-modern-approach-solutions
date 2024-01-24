# Chapter 18 - Exercise 04

Let `f` be the following function.  What will be the value of `f(10)` if `f` has
never been called before?  What will be the value of `f(10)` if `f` has been
called five times previously?

```C
int f(int i)
{
    static int j = 0;
    return i * j++;
}
```


---

When the runtime starts, `j` is allocated at a fixed memory location and
assigned the value `0`.

Calling the function returns the product of `i` and `j` being the latter
incremented.

The first call returns `0`.

Calling `f` five times increments `j` to a value of `5`. Therefore, on the sixth
call, `f(10)` returns `50`.
