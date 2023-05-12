# Chapter 14 - Exercise 05

Let `TOUPPER` be the following macro:  

```
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
```

Let `s` be a string and let `i` be an `int` variable. Show the output produced by each of the following program fragments.  

(a)
```
strcpy(s, "abcd");
i = 0;
putchar(TOUPPER(s[++i]));
```

(b)
```
strcpy(s, "0123");
i = 0;
putchar(TOUPPER(s[++i]));
```

---

The analysis assumes `s` is at least of size 5, and that the source code has been already preprocessed.  

(a)
The first statement copies the null terminated literal "abcd" into `s`, below a representation of the string array after the statement is executed:  

```
s[5] = { 'a', 'b', 'c', 'd', '\0' };
          0    1    2    3    4
```

`i` is assigned a value of `0`. The argument to `putchar` must be evaluated. The following is a step by step analysis:  

```
'a' <= (s[++i]) && (s[++i]) <='z' ? (s[++i]) - 'a' + 'A' : (s[++i])
'a' <= (s[ 1 ]) && (s[++i]) <='z' ? (s[++i]) - 'a' + 'A' : (s[++i])
'a' <=   'b'    && (s[++i]) <='z' ? (s[++i]) - 'a' + 'A' : (s[++i])
      1         && (s[ 2 ]) <='z' ? (s[++i]) - 'a' + 'A' : (s[++i])
      1         &&    'c'   <='z' ? (s[++i]) - 'a' + 'A' : (s[++i])
                1                 ? (s[++i]) - 'a' + 'A' : (s[++i])
                                    (s[++i]) - 'a' + 'A'
                                    (s[ 3 ]) - 'a' + 'A'
                                       'd'   - 'a' + 'A'
                                               'D'
```

Output: `D`.  

---

(b)
The first statement copies the null terminated literal "0123" into `s`, below a representation of the string array after the statement is executed:  

```
s[5] = { '0', '1', '2', '3', '\0' };
          0    1    2    3    4
```

`i` is assigned a value of `0`. The argument to `putchar` must be evaluated. The following is a step by step analysis:  

```
'a' <= (s[++i]) && (s[++i]) <='z' ? (s[++i]) - 'a' + 'A' : (s[++i])
'a' <= (s[ 1 ]) && (s[++i]) <='z' ? (s[++i]) - 'a' + 'A' : (s[++i])
'a' <=   '1'    && (s[++i]) <='z' ? (s[++i]) - 'a' + 'A' : (s[++i])
      0         && (s[++i]) <='z' ? (s[++i]) - 'a' + 'A' : (s[++i])
                                                           (s[++i])
                                                           (s[ 2 ])
                                                              '2'
```

Because the left hand side of the `&&` operator evaluates to `false`, short-circuit behavior comes into play. The right hand side of the colon is evaluated and its value is the value of the conditional expression.  

Output: `2`.  
