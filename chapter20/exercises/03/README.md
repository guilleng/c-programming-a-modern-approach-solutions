# Chapter 20 - Exercise 03

Explain what effect the following macro has on its arguments. You may assume that the arguments have the same type.

```
#define M(x,y) ((x)^=(y),(y)^=(x),(x)^=(y))
```

---

The macro implements the XOR swap algorithm. It swaps the variables `x` and `y` without using a temporary variable.  
