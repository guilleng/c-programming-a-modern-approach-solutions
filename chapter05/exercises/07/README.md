# Chapter 05 - Exercise 07

What does the following statement print if `i` has the value `17`? What does it
print if `i` has the value `-17`?

```C
printf("%n\n", i >= 0 ? i : -i);
```


---

If `i = 17`: 
The expression `i >= 0` is evaluated, as `17` is greater than `0` it yields a
non-zero value.  
The expression `i` is evaluated and is the result of the conditional expression.

Output: `17`.

If `i = -17`:
The expression `i >= 0` is evaluated, as `-17` is not greater than `0` it yields
a zero value.  
The expression `-i` is evaluated and is the result of the conditional
expression.  

Output: `17`. 


In short, the ternary operation evaluates to the absolute value of the integer
stored in `i`.
