# Chapter 13 - Exercise 03

Suppose that we call `scanf` as follows:

```
scanf("%d%s%d", &i, s, &j);
```

If the user enters `12abc34 56def78`, what will be the values of `i`, `s` and `j` after the call? (Assume that `i` and `j` are `int` variables and `s` is an array of characters.)

---

The first directive in the format string is `%d`. The decimal integer 12 matches it and is stored in the memory location pointed to by `i`.
The directive `%s` matches a sequence of non-white-space characters. The input string stops at the first white space encountered, and a null character is added automatically at the end. The array `s` stores the characters `'a'`, `'b'`, `'c'`, `'3'`, `'4'`, and `'\0'`.
The number 56 matches the final directive, and it is stored in the memory location pointed to by `j`.
After executing `scanf`, the function returns, and the sequence of characters `"def78"` remains in the input buffer to be processed by the next input function.


```
i    = 12  
s[6] = { 'a' 'b' 'c' '3' '4' '\0' }
j    = 56
```
