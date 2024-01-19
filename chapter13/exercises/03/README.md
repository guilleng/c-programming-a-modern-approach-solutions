# Chapter 13 - Exercise 03

Suppose that we call `scanf` as follows:

```C
scanf("%d%s%d", &i, s, &j);
```

If the user enters `12abc34 56def78`, what will be the values of `i`, `s` and
`j` after the call?  (Assume that `i` and `j` are `int` variables and `s` is an
array of characters.)


---

Let's analyze the call's behavior:

The decimal integer 12 matches the directive `%s` and is stored in the memory
location `i` points to.  The directive `%s` matches a sequence of
non-white-space characters.  The read process stops at the first white space
encountered,  automatically appending a null character.  The array `s` stores
the characters `'a'`, `'b'`, `'c'`, `'3'`, `'4'`, and `'\0'`. 
The number 56 matches the final directive, storing it in the memory location `j`
points to.

Then `scanf` returns, and the sequence of characters `"def78"` remains in the
input buffer to be processed by the next input function.

```
i    = 12  
s[6] = { 'a' 'b' 'c' '3' '4' '\0' }
j    = 56
```
