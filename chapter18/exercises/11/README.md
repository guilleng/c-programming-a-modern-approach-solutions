# Chapter 18 - Exercise 11

In Section 18.4, we saw that the following declarations are illegal:

```C
int f(int)[];      /* functions can't return arrays */
int g(int)(int);   /* functions can't return functions */
int a[10](int);    /* array elements can't be functions */
```

We can, however, achieve similar effects by using pointers: a function can
return a pointer to the first element in an array, a function can return a
pointer to a function, and the elements of an array can be pointers to
functions.  Revise each of these declarations accordingly.


---

Function that takes an integer and returns a pointer to the first element in an
array of integers:

```C
int *f(int);
```

Function that takes an integer argument and returns a pointer to a function that
takes an integer argument and returns an integer:

```C
int (*g(int))(int);
```

Array of ten pointers to functions that take and integer argument and return an
integer:

```C
int (*a[10])(int);
```
