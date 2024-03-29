# Chapter 14 - Exercise 06

(a) Write a macro `DISP(f,x)` that expands into a call of `printf` that displays
the value of the function `f` when called with argument `x`.  For example,

```C
DISP(sqrt, 3.0);
```

should expand into

```C
printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));
```

(b) Write a macro `DISP2(f,x,y)` that's similar to `DISP` but works for
functions with two arguments. 


---

(a)
```C
#define DISP(f,x)       printf(#f"(%g) = %g\n", (x), (f(x)))
```

(b)
```C
#define DISP2(f,x,y)    printf(#f"(%g, %g) = %g\n", (x), (y), (f((x),(y)))) 
```
