# Chapter 22 - Exercise 08

In previous chapters, we've used the `scanf` format string `" %c"` when we
wanted to skip white-space characters and read a nonblank character.  Some
programmers use `"%1s"` instead.  Are the two techniques equivalent? If not,
what are the differences?


---

The conversion specifiers are not equivalent.

The `c` specifier matches a sequence of characters whose length is specified by
the maximum field width, which by default is 1. 

`" %c"` will store a `char` into the corresponding object in the `scanf`
variable arguments.

The `1s` specifier matches 1 non-white-space character and automatically adds a
terminating null byte ('\0').

Depending on the type of the object that the character is to be stored, `"%1s"`
may access a forbidden memory location. This may cause to undefined behavior.
