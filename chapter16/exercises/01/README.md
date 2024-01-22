# Chapter 16 - Exercise 01

In the following declarations, the `x` and `y` structures have members named `x`
and `y`:

```C
struct { int x, y; } x;
struct { int x, y; } y;
```

Are these declarations legal on an individual basis?  Could both declarations
appear as shown in a program?  Justify your answer.


---

The declarations are entirely legal on an individual basis, and they can both
appear as shown in a program because each structure has a separate namespace for
its members, under a different scope.

In simpler terms, it can be said that `struct x` has its own `x` and a `y` and
that `struct y` also has its own `x` and `y`.
