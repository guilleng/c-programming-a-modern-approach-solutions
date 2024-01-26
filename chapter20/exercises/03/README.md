# Chapter 20 - Exercise 03

Explain what effect the following macro has on its arguments.  You may assume
that the arguments have the same type.

```C
#define M(x,y) ((x)^=(y),(y)^=(x),(x)^=(y))
```


---

The macro implements the [XOR swap
algorithm](https://en.wikipedia.org/wiki/XOR_swap_algorithm).  It swaps the
variables `x` and `y` without using a temporary variable. 
