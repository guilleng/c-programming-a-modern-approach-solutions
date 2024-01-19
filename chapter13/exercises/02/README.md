# Chapter 13 - Exercise 02

Suppose that p has been declared as follows:

```C
char *p = "abc";
```

Which of the following function calls are legal?  Show the output produced by
each legal call, and explain why the others are illegal.

(a) `putchar(p);`

(b) `putchar(*p);`

(c) `puts(p);`

(d) `puts(*p);` 


---

(a)
The function call is illegal because `putchar` expects an argument of type
`char` and the parameter is `char *`.

(b)
The function call is legal.  Dereferencing `p` yields the first value of the
string literal `p` points to.

Output: `a`.

(c)
The function call is legal, `puts` expects a pointer to `char`.  The string
printed to stdout is added a trailing newline.

Output: `abc\n`.

(d)
The function call is not legal.  The type of the argument (`char`) is not
compatible with the parameter the function expects (`const char *`).
