# Chapter 16 - Exercise 16

Which of the following statements about enumeration constants are true?

(a) 
An enumeration constant may represent any integer specified by the programmer.  

(b) 
Enumeration constants have exactly the same properties as constants created using `#define`.  

(c) 
Enumeration constants have the values 0, 1, 2, ... by default.  

(d) 
All constants in an enumeration must have different values.  

(e) 
Enumeration constants may be used as integers in expressions.  

---

(a)
The statement is true. An enumeration constant can be set to any valid `int`, including negative values. i.e.: `enum Comparison { LESSTHAN = -1, EQUAL, GREATHERTHAN };`  

(b)
No. Enumeration constants are subject to scope rules and type safety, while manifest constants are preprocessor directives that replace tokens before the compilation process.  

(c)
True.

(d)
False, it is completely legal for two or more constants to have the same value. i.e.: `enum State { WORKING = 0, FAIL = 1, FREEZE = 1, HALT = 1, DONE = 2, TERMINATED = 2 };`

(e)
True.
