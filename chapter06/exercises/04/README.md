# Chapter 06 - Exercise 04

Which one of the following statements is not equivalent to the other two
(assuming that the loop bodies are the same)?

(a) `for (i = 0; i < 10; i++) ...`

(b) `for (i = 0; i < 10; ++i) ...`

(c) `for (i = 0; i++ < 10; ) ...`


---

The three statements run `10` iterations.  Observe that statement (c) increments
`i` __before__ evaluating the loop body.  This may result in different behavior
depending on the contents of the loop body and its usage of the variable `i`. 
