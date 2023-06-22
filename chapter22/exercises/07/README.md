# Chapter 22 - Exercise 07

Suppose that we call `scanf` as follows:

```
n = scanf("%d%f%d", &i, &x, &j);
```

(`i`, `j` and `n` are `int` variables and `x` is a `float` variable.) Assuming that the input stream contains the characters shown, give the values of `i`, `j`, `n`, and `x` after the call. In addition, indicate which characters were consumed by the call.  

(a) `10•20•30¤`  

(b) `1.0•2.0•3.0¤`  

(c) `0.1•0.2•0.3¤`  

(d) `.1•.2•.3¤`  

---
    
(a)  
| Variables |   Input buffer   |
|:---------:|:----------------:|
| n: 3      | ~~10•20•30~~¤    |
| i: 10     |^                 |
| x: 20.0   |^                 |
| j: 30     |^                 |

(b)  
| Variables |   Input buffer   |
|:---------:|:----------------:|
| n: 3      | ~~1.0•2~~.0•3.0¤ |
| i: 2      |^                 |
| x: 0.0    |^                 |
| j: 2      |^                 |

(c)  
| Variables |   Input buffer   |
|:---------:|:----------------:|
| n: 3      | ~~0.1•0~~.2•0.3¤ |
| i: 0      |^                 |
| x: 0.1    |^                 |
| j: 0      |^                 |

(d)  
| Variables |   Input buffer   |
|:---------:|:----------------:|
| n: 0      |    .1•.2•.3¤     |
| i: undef  |^                 |
| x: undef  |^                 |
| j: undef  |^                 |
