# Chapter 14 - Exercise 04

For each of the following macros, give an example that illustrates a problem with the macro and show how to fix it.  

(a) 
` #define AVG(x,y)      (x - y) / 2`  

(b) 
`#define AREA(x,y)      (x) * (y)`  

---

(a)
`AVG(3 + 1, 4 * 2)` expands to `(3 + 1 - 4 * 2) / 2`. The expression evaluates to `-2` instead of `6`.  

```
#define AVG(x,y)        (((x) + (y)) / 2.0)                             
```

(b)
`12 / AREA(3, 2)` expands to `12 / (2) * (3)`. The expression evaluates to `18` instead of `2`.  

```
#define AREA(x,y)       ((x) * (y)) 
```
