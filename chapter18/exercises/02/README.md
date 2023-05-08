# Chapter 18 - Exercise 02

Answer each of the following questions with `auto`, `extern`, `register`, and/or `static`.  

(a) 
Which storage class is used primarily to indicate that a variable or function can be shared by several files?  

(b) 
Suppose that a variable `x` is to be shared by several functions in one file but hidden from functions in other files. Which storage class should `x` be declared to have?  

(c) 
Which storage classes can affect the storage duration of a variable?  

---

(a) 
The `extern` storage class indicates that the name referenced may be shared among several translation units.  

(b)
First the declaration of `x` has to be at the file scope, so that all functions in the translation unit have access to its name reference. The storage class of it should be `static` to 'hide' it from other possibly linked files.  

(c)
Considering the case of a variable defined within some block scope, then the `extern` and `static` keyword make the variable have static storage duration.  
