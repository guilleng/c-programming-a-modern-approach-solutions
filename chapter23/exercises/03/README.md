# Chapter 23 - Exercise 03

(C99) Check the documentation for your compiler to see if it performs
contraction on arithmetic expressions and, if so, under what circumstances. 


---

In GCC the `FP_CONTRACT` pragma directive is used to control floating-point
expression contraction.  When `FP_CONTRACT` does not explicitly disallow
contraction, additional optimization flags are required to enable optimizations.

1. `-ffp-contract=fast`: This flag enables aggressive floating-point expression
   contraction.

2. `-funsafe-math-optimizations`: This flag allows the compiler to assume
   certain properties about floating-point arithmetic that may not hold in all
   cases, such as associativity and commutativity.  It may result in subtle
   differences in numerical results. 

3. `-ffast-math`: This flag is a combination of several optimization flags.  It
   enables aggressive math optimizations, it may produce faster code but can
   also lead to potential inaccuracies in numerical calculations.
