# Chapter 16 - Exercise 12

Suppose that `u` is the following union:

```C
union {
    double a;
    struct {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} u;
```

If `char` values occupy one byte, `int` values occupy four bytes, and `double`
values occupy eight bytes, how much space will a C compiler allocate for u?
(Assume that the compiler leaves no "holes" between members.)


---

The total amount of memory needed for the union `u` is determined by the size of
its largest member.

+ The `double` variable `a` occupies 8 bytes.

+ To determine the size of the structure `e`, the sizes of its individual
  members should be added up.  4 bytes for the `char` array, 8 bytes for the
  `double` variable and 4 bytes for the `int` add up to 16 bytes.

+ The char array `f`, occupies 4 bytes. 

Therefore a C compiler would typically allocate 16 bytes of memory for the union
`u`.
