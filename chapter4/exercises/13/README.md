# Chapter 04 - Exercise 13

Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1)`; which is it?  

---

The expression `++i` is equivalent to `(i += 1)`. Both `++i` and `(i += 1)` immediately increment the value of `i` in memory.  
However, when `i++` is used, its value is retrieved from memory until the complete statement is evaluated."
