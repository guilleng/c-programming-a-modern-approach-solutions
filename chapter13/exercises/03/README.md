# Chapter 13 - Exercise 03

Suppose that we call `scanf` as follows:

```
scanf("%d%s%d", &i, s, &j);
```

If the user enters `12abc34 56def78`, what will be the values of `i`, `s` and `j` after the call? (Assume that `i` and `j` are `int` variables and `s` is an array of characters.)

---

The first directive in the format string is `%d`, it matches the decimal integer 12 which is stored in the address `i` points to.  
Assume `s` has enough memory allocated to hold the input sequence. The next directive is `%s`, it matches a sequence of non-withe-space characters. The input string stops at the first white space, and a null character is added automatically at the end. The array `s` stores: `'a' 'b' 'c' '3' '4' '\0'`.  
The last directive is `%d`, 56 matches the directive and is stored in `j`. `scanf` returns and the sequence of characters `def78` remains in the input buffer to be processed by the next input function.  

```
i    = 12  
s[6] = { 'a' 'b' 'c' '3' '4' '\0' }
j    = 56
```
