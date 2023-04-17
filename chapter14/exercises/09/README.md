# Chapter 14 - Exercise 09

Write the following parameterized macros.  

(a) 
`CHECK(x,y,n)` - Has the value `1` if both `x` and `y` fall between `0` and `n-1`, inclusive.  

(b) 
`MEDIAN(x,y,z)` - Finds the median of `x`, `y` and `z`.  

(c) 
`POLYNOMIAL(x)` - Computes the polynomial `3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6`.  

---

(a)
```
#define CHECK(x,y,n)                                                           \
        (((x) >= 0) && ((y) >= 0) && ((x) <= ((n) - 1)) && ((y) <= ((n) - 1)))          
```
                                                                                
(b)
```
#define MEDIAN(x,y,z)                                                          \
                            (((x) > (y)) ?                                     \
                            (((y) > (z)) ? (y) : (((x) > (z)) ? (z) : (x))) :  \
                            (((x) > (z)) ? (x) : (((y) > (z)) ? (z) : (y))))
```
                                                                                
(c)
```
#define POLYNOMIAL(x)                                                          \
        (-6 + (x) * (7 + (x) * (-1 + (x) * (-5 + (x) *(2 + 3 * (x))))))
```
