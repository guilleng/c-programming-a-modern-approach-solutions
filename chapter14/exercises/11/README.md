# Chapter 14 - Exercise 11

(C99) C programmers often use the `fprintf` function to write error messages:

```C
fprintf(stderr, "Range error: index = %d\n", index);
```

`stderr` is C's "standard error" stream; the remaining arguments are the same as
those for `printf`, starting with the format string.  Write a macro named
`ERROR` that generates the call of `fprintf` shown above when given a format
string and the items to be displayed:

```C
ERROR("Range error: index = %d\n", index);
```


---

```C
#define ERROR(str, ...)     fprintf(stderr, str, __VA_ARGS__)
```
