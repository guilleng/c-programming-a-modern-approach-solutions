# Chapter 05 - Exercise 03

The following program fragments illustrate the short-circuit behavior of logical
expressions. Show the output produced by each, assuming that `i`, `j`, and `k`
are `int` variables.

(a)

```C
i = 3; j = 4; k = 5;
printf("%d ", i < j || ++j < k);
printf("%d %d %d", i, j, k);
```

(b)

```C
i = 7; j = 8; k = 9;
printf("%d ", i - 7 && j++ < k);
printf("%d %d %d", i, j, k);
```

(c)

```C
i = 7; j = 8; k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d", i, j, k);
```

(d)

```C
i = 1; j = 1; k = 1;
printf("%d ", ++i || ++j && ++k);
printf("%d %d %d", i, j, k);
```


---

The key to determining the outputs of the program fragments above lies in
understanding short-circuit behavior.  
Even though an expression may contain symbols whose precedence is higher than
the operators`||` and `&&`, short-circuit behavior __always__ forces
left-to-right evaluation.  

Focusing on the second argument of the first `printf` call.   

(a) 
The left-hand side of the OR operator, `i < j`, evaluates to `1`, the right-hand
side `++j < k` is not evaluated.  

Output: `1 3 4 5`  

(b) 
`i - 7` evaluates to `0` the right-hand side of the expression is not evaluated.
Therefore `j` is not incremented.  

Output: `0 7 8 9`  

(c) 
The left-hand assignment in the `printf` call evaluates to `8` and stores this
value in `i` as a side effect. Short-circuit behavior determines that the OR
evaluation is `1`.  

Output: `1 8 8 9`  

(d)
The left-hand side of the OR operator `++i` evaluates to `2` and updates `i`
immediately. Short-circuit behavior dictates that the rest of the expression is
not evaluated.  

Output: `1 2 1 1`
