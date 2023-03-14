# Chapter 07 - Exercise 12

Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`, and `d` is a variable of type `double`. Explain what conversions take place during the execution of the statement:

```
d = i + f;
```

---

For the addition on the right hand of the assignment, the integer is converted to a `float` type per the usual arithmetic conversion rules.  
During assignment, the value on the right-hand side of the operator is converted to the type of the variable on the left-hand side of the operator. The `float` value yielded in the addition is converted to the type of `d`, `double`.
