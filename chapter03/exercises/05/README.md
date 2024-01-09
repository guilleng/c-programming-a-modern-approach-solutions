# Chapter 03 - Exercise 05

Suppose that we call `scanf` as follows:

```C
scanf("%f%d%f", &x, &i, &y);
```

If the user enters:

```C
12.2 45.6 789
```

What will be the values of `i`, `x` and `y` after the call? (Assume that `x` and
`y` are `float` variables and `i` is an `int` variable)


---

The value `12.2` matches the `%f` directive.

The blank space is discarded and the value `45` is assigned to `i`.

For the final directive, the value `.6` matches and is assigned to `y`.

The call returns and the variables have the values:

```C
i = 45
x = 12.2
y = 0.6
```
