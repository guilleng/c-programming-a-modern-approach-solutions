# Chapter 16 - Exercise 11

Suppose that s is the following structure:

```
struct {
    double a;
    union {
        char b[4];
        double c;
        int d;
    } e;
    char f[4];
} s;
```

If `char` values occupy one byte, `int` values occupy four bytes, and `double` values occupy eight bytes, how much space will a C compiler allocate for `s`? (Assume that the compiler leaves no "holes" between members.)

---

To compute the total amount of memory needed for the structure `s`, the sizes of its individual members should be added up. The structure consists of three members:

+ The `double` variable `a`, which occupies 8 bytes.  
+ The union `e` also requires 8 bytes because the largest member it may hold is a `double` datatype.  
+ The char array `f`, which occupies 4 bytes.

Therefore, a C compiler would typically allocate 20 bytes of memory for the structure `s`.
