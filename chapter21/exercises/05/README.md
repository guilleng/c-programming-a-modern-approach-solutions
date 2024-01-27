# Chapter 21 - Exercise 05

The `islower` function, which belongs to `<ctype.h>`, tests whether a character
is a lower-case letter.  Why would the following macro version of `islower` not
be legal, according to the C standard? (You may assume that the character set is
ASCII.)

```C
#define islower(c) ((c) >= 'a' && (c) <= 'z')
```


---

The C standard specifies that macros that replace library functions must be
fully parenthesized and should not have arguments appear more than once within
the expansion.

The first requirement is enforced for the macro definition, but not the second.
