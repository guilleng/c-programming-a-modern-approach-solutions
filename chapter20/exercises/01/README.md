# Chapter 20 - Exercise 01

Show the output produced by each of the following program fragments. Assume that
`i`, `j`, and `k` are `unsigned short` variables.

(a) 
```C
i = 8; j = 9;
printf("%d", i >> 1 + j >> 1);
```

(b) 
```C
i = 1;
printf("%d", i & ~i);
```

(c) 
```C
i = 2; j = 1; k = 0;
printf("%d", ~i & j ^ k);
```

(d) 
```C
i = 7; j = 8; k = 9;
printf("%d", i ^ j & k);
```


---

(a)
Having in mind operator precedence rules, the code in the call of `printf` can
be parenthesized as follows:

```C
(i >> (1 + j)) >> 1
```

The evaluation procedure looks like:

```C
(8 >> (1 + 9)) >> 1
(8 >>   10   ) >> 1
(     0      ) >> 1
      0
```

(b)
In a similar manner to (a)

```C
(i & (~i))
(1 & (~1))
(1 &   0 )
   0    
```

(c)
```C
(((~i) & j) ^ k)
(((~2) & 1) ^ 0)
((  0  & 1) ^ 0)
(      0    ^ 0)
            0
```

(d)
```C
(i ^ (j & k))
(7 ^ (8 & 9))
(7 ^    8   )
   15        
```
