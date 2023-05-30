# Chapter 18 - Exercise 07

Suppose that we declare `x` to be a `const` object. Which one of the following statements about `x` is false?  

(a) 
If `x` is of type `int`, it can be used as the value of a case label in a switch statement.  

(b) 
The compiler will check that no assignment is made to `x`.  

(c) 
`x` is subject to the same scope rules as variables.  

(d) 
`x` can be of any type.  

---

(a)
False. Case labels on switch statements can only be compile-time constants, `x` is a constant variable resolved at runtime.  

(b)
True. A `const` object cannot be modified after its initialization.  

(c)
True. A `const` object is subject to the same scope rules as any other variable, and its scope is determined by where it is declared.  

(b)
True. The `const` type qualifier do not constrain the type specifier of the variable.  
