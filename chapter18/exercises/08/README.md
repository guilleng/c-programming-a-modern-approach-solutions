# Chapter 18 - Exercise 08

Write a complete description of the type of `x` as specified by each of the following declarations.  

(a) `char (*x[10])(int);`  

(b) `int (*x(int))[5];`  

(c) `float *(*x(void))(int);`  

(d) `void (*x(int, void (*y)(int)))(int);`  


---

(a)
Array of 10 function pointers that take an `int` argument and return a `char`.  

(b)
Function that takes an `int` parameter and returns a pointer to an array of 5 `int`.  

(c)
Function that takes no arguments and returns a pointer to a function that takes an `int` argument and returns a pointer to `float`.  

(d)
Function that takes an `int` plus a function pointer as arguments. Its function argument that takes an `int` argument returning nothing. `x` returns a pointer to a function that takes an `int` parameter and returns nothing.  

