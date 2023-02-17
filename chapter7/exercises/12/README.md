# Chapter 07 - Exercise 12

Suppose that `i` is a variable of type `int`, `f` is a variable of type `float`, and `d` is a variable of type `double`. Explain what conversions take place during the execution of the statement:

```
d = i + f;
```

---

During addition on the right hand of the assignment, the integer is converted to a `float` type per the usual arithmetic conversion rules.  
When the assignment takes place, the `float` value resulting of the addition is converted to the type of `d`, `double`.  
