# Chapter 05 - Exercise 02

The following program fragments illustrate the logical operators. Show the
output produced by each, assuming that `i`, `j`, and k are `int` variables.

(a)

```C
i = 10; j = 5;
printf("%d", !i < j);
```

(b)

```C
i = 2; j = 1;
printf("%d", !!i + !j);
```

(c)

```C
i = 5; j = 0; k = -5;
printf("%d", i && j || k);
```

(d)

```C
i = 1; j = 2; k = 3;
printf("%d", i < j || k);
```


---

The second argument of the `printf` call is key for the evaluation procedure.
Let's outline it step by step:

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
