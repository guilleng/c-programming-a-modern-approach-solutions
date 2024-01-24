# Chapter 18 - Exercise 12

(a) Write a complete description of the type of the function `f`, assuming that
it’s declared as follows:

```C
int (*f(float (*)(long), char *))(double);
```

(b) Give an example showing how `f` would be called.


---

(a) Description of `f`'s type: 

`f` is a function that takes two arguments,  
(1) a pointer to a function that takes a `long` and returns a `float` and  
(2) a pointer to `char`,  
`f` returns a pointer to a function that takes a `double` argument and  
returns an `int`.


(b) See `ex12.c`.
