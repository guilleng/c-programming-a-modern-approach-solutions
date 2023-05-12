# Chapter 14 - Exercise 03

Let `DOUBLE` be the following macro:  

```
#define DOUBLE(x) 2*x
```

(a) 
What is the value of `DOUBLE(1+2)`?  

(b) 
What is the value of `4/DOUBLE(2)`?  

(c) 
Fix the definition of `DOUBLE`.  

---

(a)
The preprocessor expansion of `DOUBLE(1+2)` is `2*1+2`. The expression evaluates to `4`.  

(b)
The preprocessor expansion of `4/DOUBLE(2)` is `4/2*2`. The expression evaluates to `4`.  

(c)
```
#define DOUBLE(x)   (2 * (x))
```
