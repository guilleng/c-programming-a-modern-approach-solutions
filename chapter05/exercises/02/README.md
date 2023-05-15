# Chapter 05 - Exercise 02

The following program fragments illustrate the logical operators. Show the output produced by each, assuming that `i`, `j`, and k are `int` variables.

(a)
```
i = 10; j = 5;
printf("%d", !i < j);
```
(b)
```
i = 2; j = 1;
printf("%d", !!i + !j);
```
(c)
```
i = 5; j = 0; k = -5;
printf("%d", i && j || k);
```
(d)
```
i = 1; j = 2; k = 3;
printf("%d", i < j || k);
```

---

Focusing on the second argument of the `printf` call, the evaluation procedure can be outlined as follows:  

(a)
```
!i  < j
!10 < 5
 0  < 5
    1
```

Output: `1`

(b)
```
!!i + !j
!!2 + !1
!!2 + 0
 !0 + 0
  1 + 0
    1
```

Output: `1`

(c)
```
i && j || k
5 && 0 || -5
  0    || -5
       1
```

Output: `1`

(d)
```
i < j || k
1 < 2 || 3
  1   || 3
      1
```

Output: `1`
