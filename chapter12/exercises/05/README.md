# Chapter 12 - Exercise 05

Suppose that a is `a` one-dimensional array and `p` is a pointer variable.
Assuming that the assignment `p = a` has just been performed, which of the
following expressions are illegal because of mismatched types? Of the remaining
expressions, which are true (have a nonzero value)?

(a) `p == a[0]` 

(b) `p == &a[0]`

(c) `*p == a[0]`

(d) `p[0] == a[0]`


---

(a) Compares an address to the value stored at position 0 of `a`.  Illegal.

(b) Compares an address to an address.  `p` has just been assigned `a`, this
expression yields `true`.

(c) Compares the value pointed to by `p` to the value stored at position 0 of
the array `a`.  Because `p` has been assigned the address of the first element
of `a`, this expression yields `true`. 

(d) `p[0]` is the same as `*(p + 0)` and `*p`.  The comparison is the same as
(c). The expression yields `true`.
