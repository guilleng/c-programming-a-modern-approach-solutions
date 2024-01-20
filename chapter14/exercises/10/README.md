# Chapter 14 - Exercise 10

Functions can often -- but not always -- be written as parameterized macros.
Discuss what characteristics of a function would make it unsuitable as a macro.


---

Functions that involve control structures as conditionals or loops, or that have
side effects as modifying global state, cannot be expressed as parameterized
macros in C.

Macros are a tool primarily intended for creating and modifying tokens prior to
compilation.  They can be useful for defining constants and performing simple
calculations, but they have limitations.  For example, macros are expanded
inline and can cause unexpected behavior if not used carefully, especially if
they modify global state or have side effects.

Macros can also lead to code that is more difficult to read and maintain. 
