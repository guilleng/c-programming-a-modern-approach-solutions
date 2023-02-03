# Chapter 04 - Exercise 02

If `i` and `j` are positive integers, does `(-i)/j` always have the same value as `-(i/j)`? Justify your answer.  

---

Page 54 reads: 
> "The C89 standard states that if either operand is negative, the result of a division can be rounded either up or down... it depends on the implementation... In C99, on the other hand, the result of a division is always truncated toward zero."  

Exploring evaluation under the C99 standard, we observe:

1. For the expression `(-i)/j`: 

`(-i)` will be evaluated first in accordance to operator precedence.  
The result of applying the unary operator `-` to `i` will yield a negative integer `v`.  
The integer division `v/j`, will be __rounded towards zero__.

2. For the expression `-(i/j)`:  

The integer division `(i/j)` will be __rounded towards zero__ to an integer `v`.   
Applying the unary `-` operator to `v` will yield the same value as the evaluation of `(-i)/j`.  

> In conclusion, under the __C99__ standard, the expression `(-i)/j` __is equivalent__ to `-(i/j)` whenever `i` and `j` are positive integers.

Under the __C89__ standard:

1. For the expression `(-i)/j`:  

The result of applying the unary operator `-` to `i` will yield a negative integer `v`.   
Evaluation proceeds with the division `v/j`. Being `v` negative and `j` non-negative, this quotient may be __rounded up or down__ depending upon __implementation-defined__ details.  

2. For the expression `-(i/j)`:  

The quotient `(i/j)` will be __down rounded__ to a value `v`.  
Then, after applying the unary `-` operator to `v` we may observe a value that is different of the one obtained in the evaluation of `(-i)/j`.  

> Under the __C89__ standard, the result of `(-i)/j` does __not always__ have the same value as `-(i/j)`. 
