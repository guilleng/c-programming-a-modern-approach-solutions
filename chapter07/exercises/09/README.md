# Chapter 07 - Exercise 09

Suppose that `i` and `j` are variables of type `int`. What is the type of the
expression `i / j + 'a'`?


---

The `char` value `'a'` is automatically converted to `int` due to __integral
promotion__.  The type of the expression is `int`.
