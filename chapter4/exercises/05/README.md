# Chapter 04 - Exercise 05

What is the value of each of the following expressions in C89? (Give all possible values if an expression may have more than one value.)  

(a) `8 % 5`  
(b) `-8 % 5`  
(c) `8 % -5`  
(d) `-8 % -5`  

Q&A Page 66 clarifies the remainder operator. 

> "... the goal is to ensure that the value of `(a /b) * b + a % b` is equal to `a`..."  

Given that integer division for negatives is implementation defined, applying the rules we obtain:

(a) `3`

(b) We have to ensure the equality `(-8 / 5) * 5 + -8 % 5 == -8`  
But `(-8/5)` can be either `-1` or `-2` depending upon implementation.   
```
(-1 || -2) * 5 + -8 % 5 == -8

    -5         + -8 % 5 == -8 
                 -8 % 5 == -3

   -10         + -8 % 5 == -8 
                 -8 % 5 ==  2  
```
Possible results: `2` and `-3`.

(c) We have to ensure the equality `(8 / -5) * 5 + -8 % 5 == 8`  
But `(8/-5)` can be again either `-1` or `-2`.  
```
(-1 || -2) * -5 + 8 % -5 ==  8  

     5          + 8 % -5 ==  8
                  8 % -5 ==  3

    10          + 8 % -5 ==  8
                  8 % -5 == -2
```
Possible results: `3` and `-2`.

(d) We have to ensure the equality `(-8 / -5) * -5 + -8 % -5 == -8`  
But `(-8/-5)` can be either `1` or `2` depending upon implementation.   
```
(1  ||  2) * -5 + -8 % -5 == -8

    -5          + -8 % -5 == -8
                  -8 % -5 == -3

   -10          + -8 % -5 == -8
                  -8 % -5 ==  2
```
Possible results: `-3` and `2`.
