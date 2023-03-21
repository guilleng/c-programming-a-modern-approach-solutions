# Chapter 11 - Exercise 02
If `i` is an `int` variable and `p` and `q` are pointers to `int`, which of the following assignments are legal?

(a) `p = i;`  
(b) `*p = &i;`  
(c) `&p = q;`  
(d) `p = &q;`  
(e) `p = *&q;`  
(f) `p = q;`  
(g) `p = *q;`  
(h) `*p = q;`  
(i) `*p = *q;`  

---

> Only (e), (f) and (i) are legals statements.  

(a)
Assigning to a pointer to `int` (`p`) an `int` (`i`) may produce undefined behavior.  

(b)
Assigning to an `int` (`*p`) a pointer to `int` (`&i`) is a type error.  

(c)
Left-hand side of assignment is not a valid operand (`&p`).  

(d)
Assigning to a pointer to `int` (`p`) a pointer to pointer to `int` (`&q`) which may result undefined behavior.  

(e)
The statement is equal to `p = q;`. `p` expects a pointer to `int`, and `*&p` dereferences the memory address of `q` yielding a pointer to `int`.  

(f)
The statement is legal because both the left-hand side and the right-hand side are pointers to `int`.  

(g)
The left hand-side is a pointer to `int` (`p`), the right-hand side is an `int` (`*q`), which results in undefined behavior.  

(h)
The left hand-side is an `int` (`*p`), and right-hand side a pointer to `int` resulting in undefined behavior.  

(i)
The statement is legal. Both the left-hand side and the right hand sides of the assignment statement are of type `int`.  
