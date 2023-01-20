# Chapter 04 - Exercise 12

Show the output produced by each of the following program fragments. Assume that `i` and `j` are `int` variables.

(a) 
```
i = 5;  
j = ++i * 3 - 2;  
printf("%d %d", i, j);  
```
(b) 
```
`i  5;  
j = 3 - 2 * i++;  
printf("%d %d", i, j);  
```
(c) 
```
`i  7;  
j = 3 * i-- + 2;  
printf("%d %d", i, j);  
```
(d) 
```
`i  7;  
j = 3 + --i * 2;  
printf("%d %d", i, j);  
```

---

We focus on the second statement, using the operator precedence rules.

(a) `++i` is a prefix incrementation that will immediately fetch `5` from `i`, increment and store it.  
The multiplication between `6` and `3` evaluates to `18`.  
The substraction of `2` to `18` yields `16`.  
The assignment `j = 16` takes places. It evalueates to `16` and as a side effect stores it in `j`.  

Output: `6 16`  

(b) The unary operator has the highest precedence. It is a postfix increment that will retrieve the value `5` from `i` and evaluate to it. 
The multiplication between `5` and `2` yields `10`.  
`10` is substracted from `3` yielding `-7`.  
The assignment between `j` and `-7` evaluates to `-7` and stores it in `j`.  
It is now safe to assume that the variable `i` is updated holding `6`.  

Output: `6 -7`  

(c) `i--` is the first operation to get evaluated. It will retrieve the value `7` until complete statement execution.  
`3 * 7` yields `21`.  
`21 + 2` evaluates to `23`.  
`j = 23` evalueates to `23` and stores it in `j` as a side effect.  
`i` is now safe to consider to be updated to its decremented value `6`.  

Output: `6 23`  

(d) `--i` is the first operation to get evaluated. Being it prefix, it will retrieve the value `7` from the variable, decrement it yielding `6` and update it immediately.  
`6 * 2` evaluates to `12`.  
`3 + 12` yields `15`.  
`j = 15` evalueates to `15` and stores it in `j` as a side effect.  

Output `6 15`  
