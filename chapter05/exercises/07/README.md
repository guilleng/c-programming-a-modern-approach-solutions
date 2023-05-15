# Chapter 05 - Exercise 07

What does the following statement print if `i` has the value `17`? What does it print if `i` has the value `-17`?  

```
printf("%n\n", i >= 0 ? i : -i);
```

---

When `i = 17`: 
The expression `i >= 0` is evaluated, as `17` is greater than `0` it yields a non-zero value.  
The expression `i` is evaluated and is the result of the conditional expression.  

Output: `17`.

When `i = -17`:
The expression `i >= 0` is evaluated, as `-17` is not greater than `0` it yields a zero value.  
The expression `-i` is evaluated and is the result of the conditional expression.  

Output: `17`. 

> The ternary operator evaluates to the absolute value of the integer stored in `i`.  
