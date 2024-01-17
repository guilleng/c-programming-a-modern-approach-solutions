# Chapter 11 - Exercise 01

If `i` is a variable and `p` points to `i`, which of the following expressions
are aliases to `i`?

(a) `*p`

(b) `&p`

(c) `*&p`

(d) `&*p`

(e) `*i`

(f) `&i`

(g) `*&i`

(h) `&*i`


---

> Only (a) and (g) are aliases to `i`. 

(a) `*p` is an alias to `i` because the dereference/indirection operator applied
to a pointer determines the value referenced by its operand.

(b) `&p` is not an alias to `i`.  The address-of operator yields the memory
address of its operand. 

(c) `*&p` is not an alias to `i`.  The address-of and the indirection operator
have the same precedence.  Associativity rules are right-to-left.  The memory
address of the pointer variable `p` will be dereferenced, yielding the value
stored at that memory location, which is the pointer to `i`.

(d) `&*p` is not an alias to `i`.  Dereferencing `p` is an alias to `i`, and
applying the address-of operator to it yields the memory address of `i`.

(e) `*i` is not an alias to `i`.  Dereferencing an integer in C is a type error
that should be detected by the compiler.

(f) `&i` is not an alias to `i`.  The address-of operator yields the memory
address of its operand. 

(g) `*&i` is an alias to `i`.  Dereferencing the address in which `i` is stored
yields the value of `i`.

(h) `&*i` is not an alias to `i`.  Dereferencing an integer is a type error. 
