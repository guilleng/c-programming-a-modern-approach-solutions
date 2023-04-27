# Chapter 16 - Exercise 17

Suppose that `b` and `i` are declared as follows:

```
enum {FALSE, TRUE} b;
int i;
```

Which of the following statements are legal? Which ones are "safe" (always yield a meaningful result)?

(a) 
`b = FALSE;`  

(b) 
`b = i;`  

(c) 
`b++;`  

(d) 
`i = b;`  

(e) 
`i = 2 * b + 1;`  

---

(a)
The statement is entirely safe and legal.  

(b)
The statement is legal, but not safe due to the fact that `i` can be any integer value. As such, it may differ from `0` or `1` which are the enumeration constants defaults.  

(c)
The statement is legal, but not safe due to the fact that `b` can go 'out of bounds' of the defined enumeration constants.  

(d)
The value of `b` can be safely assigned to `i`, because `b` is an enumeration type, which can be implicitly converted to an integer type.

(e)
The value of `b` can be implicitly converted to an integer type and used as an integer expression.  
