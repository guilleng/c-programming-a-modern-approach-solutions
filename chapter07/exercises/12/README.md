# Chapter 07 - Exercise 12

Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`,
and `d` is a variable of type `double`. Explain what conversions take place
during the execution of the statement:

```C
d = i + f;
```


---

The integer is on the right hand side of the assignment is converted to a
`float` type per the usual arithmetic conversion rules. 

Before assignment, the value on the right-hand side of the equal operator is
converted to the type of the variable on its left-hand side.  Thus, the `float`
value from yielded in the addition is converted to the type of `d`, `double`.
