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

The key is to focus on the second statement applying the operator precedence rules.  

(a) 
`++i` is a prefix incrementation that will fetch `5` from `i`, increment it and update `i`.  
The multiplication between `6` and `3` evaluates to `18`.  
Subtracting `2` from `18` yields `16`.  
The assignment `j = 16` takes places. It evaluates to `16` and as a side effect stores it in `j`.  

Output: `6 16`  

(b) 
The unary operator has the highest precedence. This postfix increment retrieves `5` from `i` and evaluates to it. 
The multiplication between `5` and `2` yields `10`.  
`10` is subtracted from `3` yielding `-7`.  
The assignment between `j` and `-7` evaluates to `-7` and stores it in `j`.  
It is now safe to assume that the variable `i` has been updated, holding `6`.  

Output: `6 -7`  

(c) 
`i--` is the first operation to get evaluated. It retrieves the value `7` until the complete statement execution.  
The multiplication between `3` and `7` yields `21`.  
Adding `21` and `2` yields `23`.  
`j = 23` evaluates to `23` and stores it in `j` as a side effect.  
It is now safe to assume that `i` holds `6`.  

Output: `6 23`  

(d) 
`--i` is the first operation to get evaluated. This retrieves the value `7` from `i`, decrement it yielding `6` and updates it immediately.  
The multiplication between `6` and `2` yields `12`.  
Adding `3` and `12` yields `15`.  
`j = 15` evaluates to `15` and stores it in `j` as a side effect.  

Output `6 15`  
