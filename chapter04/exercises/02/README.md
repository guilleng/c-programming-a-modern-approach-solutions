# Chapter 04 - Exercise 02

If `i` and `j` are positive integers, does `(-i)/j` always have the same value
as `-(i/j)`? Justify your answer.

---

Under the __C99__ standard:

1. `(-i)/j`: 

`(-i)` is evaluated first in accordance to operator precedence.  It yields a
negative integer `v`.  The integer division `v/j`, is __rounded towards zero__.

2. `-(i/j)`:

Integer division `(i/j)` is __rounded towards zero__ to some integer `v`.
When applying the unary `-` operator to `v` it yields the same value as the
expression `(-i)/j`.

> Under the __C99__ standard, the expression `(-i)/j` __is equivalent__ to
> `-(i/j)` whenever `i` and `j` are positive integers.

Under the __C89__ standard:

1. `(-i)/j`:

Applying the unary operator `-` to `i` yields some negative integer `v`.
Evaluation proceeds with the division `v/j`.  Because `v` is negative and `j`
non-negative, this quotient may be __rounded up or down__ depending upon
implementation-defined details.

2. `-(i/j)`:

The quotient `(i/j)` is __rounded down__ to a value `v`.  Thus applying the
unary operator `-` to `v` may yield a value different of the one obtained for 
`(-i)/j`.

> Under the __C89__ standard, the result of `(-i)/j` does __not always__ have
> the same value as `-(i/j)`.
