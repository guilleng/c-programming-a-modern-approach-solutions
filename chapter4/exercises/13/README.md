# Chapter 04 - Exercise 13

Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1)`; which is it?  

---

The expression `++i` is equivalent to `(i += 1)`.  Both `++i` and `(i += 1)` immediately increment the value of `i` in memory.  
However, when `i++` is used, the value stored in i is retrieved from memory, and it is not safely assumed to be updated until the complete statement containing the expression is evaluated.
