# Chapter 17 - Exercise 09

True or false: If `x` is a structure and `a` is a member of that structure, then
`(&x)->a` is the same as `x.a`. Justify your answer.


---

True.

```C
(&x)->a == (*(&x)).a == x.a
```

The `->` operator is used to access a member of a structure through a pointer to
that structure and the `&x` expression yields a pointer to the structure `x`.
