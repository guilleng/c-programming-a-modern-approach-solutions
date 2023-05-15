# Chapter 07 - Exercise 10

Suppose that `i` is a variable of type `int`, `j` is a variable of type `long`, and `k` is a variable of type `unsigned int`. What is the type of the expression `i + (int) j * k`?

---

The cast operator has the highest precedence, and forces the conversion to `int` of the variable `j`. 
The product between `j` and `k` has its type determined by the usual arithmetic conversions. Both have the same rank, therefore the signed operand must be converted to the type of the unsigned operand. `j` is converted to `unsigned int`.  
The binary addition operator mixes an `int` and an `unsigned int`. The same conversion as before applies.  
The type of the expression is `unsigned int`.  

