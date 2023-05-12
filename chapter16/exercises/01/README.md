# Chapter 16 - Exercise 01

In the following declarations, the `x` and `y` structures have members named `x` and `y`:

```
struct { int x, y; } x;
struct { int x, y; } y;
```

Are these declarations legal on an individual basis? Could both declarations appear as shown in a program? Justify your answer.

---

The declarations are entirely legal on an individual basis and can both appear as shown in a program because each structure has a separate name space for its members. (A new scope).

In layman terms, it can be said that `struct x` has an `x` and a `y` and that `struct y` has its own `x` and `y`.

It is also worth noting that a assigning `struct x` to `struct  y` or vice versa would result in a type error.  