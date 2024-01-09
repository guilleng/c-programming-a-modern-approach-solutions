# Chapter 03 - Exercise 04

Suppose that we call `scanf` as follows:

```C
scanf("%d%f%d", &i, &x, &j);
```

If the user enters:

```C
10.3 5 6
```

What will be the values of `i`, `x` and `j` after the call? (Assume that `i` and
`j` are `int` variables and `x` is a `float` variable)


---

`scanf` will process the directive `%d`. The value `10` matches and `10` is
assigned to `i`.

The value `.3` matches the next directive, and is assigned to `x`.

The white space after the `3` is consumed. `5` matches the directive and is
assigned to `j`

The call returns, and the variables hold the values:

```
i = 10
x = 0.3
j = 5
```
