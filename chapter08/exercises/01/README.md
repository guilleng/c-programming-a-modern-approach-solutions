# Chapter 08 - Exercise 01

We discussed using the expression `sizeof(a) / sizeof(a[0])` to calculate the number of elements in an array. The expression `sizeof(a) / sizeof(t)`, where _t_ is the type of `a`'s elements, would also work, but it's considered an inferior technique. Why?

---

This is because `sizeof(a)` gives the total size of the array in bytes, while `sizeof(a[0])` gives the size of each element in bytes. Dividing the total size of the array by the size of each element always gives the number of elements in the array.  
The second expression `sizeof(a) / sizeof(t)` divides the size of the entire array `a` in bytes by the size of an __arbitrary data type__ `t`, which may not necessarily be the same as the size of a single element in the array `a[0]`.  
