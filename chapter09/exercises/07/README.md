# Chapter 09 - Exercise 07

Suppose that the function `f` has the following definition:  

```
int f(int a, int b) { ... }
```

Which of the following statements are legal? Assume that `i` has type `int` and `x` has type `double`.  

(a) `i = f(83, 12);`  
(b) `x = f(83, 12);`  
(c) `i = f(3.15, 9.28);`  
(d) `x = f(3.15, 9.28);`  
(e) `f(83, 12);`  

---

All the statements are perfectly legal. Below, some caveats:  

(a)
The assignment statement between `i` and the function call `f(83, 12)` requires the call's evaluation first.  
The type of the arguments matches the type of the parameters. Normal behavior, no conversions needed.  
For the assignment the type of the lvalue `i` is the same as the return type of the rvalue `f`. No conversion is performed.  

(b)
The assignment statement between `x` and the function call `f(83, 12)` requires the call's evaluation first.  
The type of the arguments matches the type of the parameters.  
For the assignment the type of the lvalue `x` do not match the return type of `f`, therefore the rvalue is implicitly converted to `double`.

(c)
The assignment between `i` and the function call `f(3.15, 9.28)` requires the function call evaluation first.  
The type of the arguments and parameters do not match. Argument conversions apply. Because the type of the parameters is narrower than the type of the arguments, their decimal parts are dropped. The call behaves as `f(3, 9)`.  
For the assignment the type of the lvalue `i` is the same as the return type of the `f`, no conversion is performed.  

(d)
The assignment statement between `x` and the function call `f(3.15, 9.28)` requires the function call evaluation first.  
The type of the arguments and parameters do not match. The type of the parameters is narrower than the type of the arguments, their decimal parts are dropped. The call behaves as `f(3, 9)`.  
For the assignment the type of the lvalue `x` don't match the return type of the rvalue `f`, which is promoted to `double`.  

(e)
The type of the arguments matches the type of the parameters. As the function call is an rvalue statement, the returned value is discarded. Nonetheless, there exists the possibility that side effects from statements within the function body modify the program execution environment.  
