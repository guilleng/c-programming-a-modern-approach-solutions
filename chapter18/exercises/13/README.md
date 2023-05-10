# Chapter 18 - Exercise 13

Which of the following declarations are legal? (Assume that `PI` is a macro that represents 3.14159.)

(a) `char c = 65;`  

(b) `static int i = 5, j = i * i;`  

(c) `double d = 2 * PI;`  

(d) `double angles[] = {0, PI / 2, PI, 3 * PI / 2};`  

---

(a), (c) and (d) are legal declarations.

(b)
Is illegal. Static variables require a compile-time constant as initializer.  
