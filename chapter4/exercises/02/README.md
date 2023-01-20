# Chapter 04 - Exercise 02

If `i` and `j` are positive integers, does `(-i)/j` always have the same value as `-(i/j)`? Justify your answer.  

---

Page 54 reads: 
> "The C89 standard states that if either operand is negative, the result of a division can be rounded either up or down... it depends on the implementation... In C99, on the other hand, the result of a division is always truncated toward zero."  

The answer depends of the standard and platform used to compile our program.  

> Under the __C99__ standard we may outline the evaluation as follows:  
> 
> > For the expression `(-i)/j`: 
> > 
> > `(-i)` will be evaluated first in accordance to operator precedence.  
> > Being `i` a non-negative integer, the result of applying the unary operator `-` to `i` will yield a negative integer.  Let's call it `v`.  
> > Evaluation continues with the integer division `v/j`. Being `v` negative and `j` non-negative, the result will be __rounded towards zero__ always yielding a negative value or zero.
> >
> > For the expression `-(i/j)`:  
> > 
> > The integer division `(i/j)` will be __rounded towards zero__ to a value `v`.   
> > The expression that follows is of the form `-v`. Being `v` non-negative or zero as it is the result of the quotient of non-negative integers.  
> > Applying the unary minus operator to `v` will always yield either zero or a negative value.  

Under the __C99__ standard, the expression `(-i)/j` __is equivalent__ to `-(i/j)` whenever `i` and `j` are positive integers.

> Under the __C89__ standard evaluation will be as follows:  
>
> > For the expression `(-i)/j`:  
> >
> > `(-i)` will be evaluated first in due to operator precedence.  
> > Being `i` a non-negative integer, the result of applying the unary operator `-` to `i` will yield a negative integer `v`.  
> > Evaluation procedes with the division `v/j`. Being `v` negative and `j` non-negative, the result of evaluating this quotient will be a negative value that may be __rounded up or down__ depending upon __implementation-defined__ details.  
> > For the expression `-(i/j)`:  
> >
> > The quotient `(i/j)` will be __down rounded__ to a value `v`.  
> > `v` is non-negative or zero as it is the result of the quotient of non-negative integers.  
> > After applying the unary minus operator the variable will hold a negative value or zero.

Under the __C89__ standard, then the result of `(-i)/j` does __not always__ have the same value as `-(i/j)`. 
