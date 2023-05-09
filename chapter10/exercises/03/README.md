# Chapter 10 - Exercise 03

Suppose that a program has only one function (`main`). How many different variables named `i` could this program contain?  

---

In terms of the theoretical limit of how many variables a program can have, as many as they fit in the addressable memory space.  

In the context of the question, the variable name `i` could refer to it being global, local or declared within any level of nesting inside a block. But the number of different variables named `i` that the program can contain in its execution environment is only one. Which value it refers to will depend on the scope where the name reference is used.  
