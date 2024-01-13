# Chapter 07 - Exercise 04

If `c` is a variable of type `char`, which one of the following statements is
illegal?

(a) `i += c; /* i has type int */`

(b) `c = 2 * c - 1;`

(c) `putchar(c);`

(d) `printf(c);`


---

Statement (d) is illegal.
The `printf` call expects a format string as its first argument, which specifies
how the remaining arguments are to be formatted and printed.  In this statement
the format string is missing.  The function cannot determine how to print the
value of the `char` variable `c`.
