# Chapter 06 - Exercise 05

Which one of the following statements is not equivalent to the other two
(assuming that the loop bodies are the same)?

(a) `while (i < 10) { ... }`

(b) `for ( ; i < 10; ) { ... }` 

(c) `do { ... } while (i < 10);`


---

Statement (c) may not be equivalent.  Even if the condition evaluates to zero
initially (c) will execute its loop body at least once.
