# Chapter 05 - Exercise 03

The following program fragments illustrate the short-circuit behavior of logical expressions. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.

(a)
```
i = 3; j = 4; k = 5;
printf("%d ", i < j || ++j < k);
printf("%d %d %d", i, j, k);
```
(b)
```
i = 7; j = 8; k = 9;
printf("%d ", i - 7 && j++ < k);
printf("%d %d %d", i, j, k);
```
(c)
```
i = 7; j = 8; k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d", i, j, k);
```
(d)
```
i = 1; j = 1; k = 1;
printf("%d ", ++i || ++j && ++k);
printf("%d %d %d", i, j, k);
```

---

(a) We have to analyze first the result of evaluation of the first `printf` call. But even though the prefix increment operator `++j` has higher precedence than the logical OR operator `||`, the short-circuit behavior forces left-to-right evaluation. The left-hand side of the OR operator, `i < j`, evaluates to `1`. Then the right-hand side `++j < k` is not evaluated and the value of `j` is not incremented. 

Output: `1 3 4 5`

(b) In the same line as the behavior of (b), because `i - 7` evaluates to `0`, short-circuit behavior takes precedence. The righ-hand side of the expression is not evaluated and `j` is not incremented.

Output: `0 7 8 9`

(c) The left-hand assignment in the `printf` call evaluates to `8`. The righ-hand assignment will not take place because short-circuit behavior determines that the OR evaluation concludes as `1` immediately.  

Output: `1 8 8 9`

(d) The left-hand side of the OR operator must be evaluated first.  
`++i` evaluates to `2` and updates `i`. Short circuit behavior determines that the rest of the expression will not be evaluated.  

Output: `1 2 1 1`
