# Chapter 14 - Exercise 02

Write a macro `NELEMS(a)` that computes the number of elements in a
one-dimensional array `a`.  _Hint_: See the discussion of the `sizeof` operator
in Section 8.1


---

```C
#define NELEMS(a)   (sizeof(a) / sizeof(*a))
```
