# Chapter 04 - Exercise 13

Only one of the expressions `++i` and `i++` is exactly the same as `(i += 1)`; which is it?  

---

`++i` and `(i += 1)` are equivalent. By applying the given evaluation rules, it is clear that once this subexpressions are computed (even when they form part of a larger and more complex statement) both yield the incrementation of `i` updating its value in memory immediately.  
On the other hand, if we picture `i++` as a subexpression of a complex operation, its semantics rules dictates that it will just yield the retrieved value that is current in memory until the full statement is evaluated.  
