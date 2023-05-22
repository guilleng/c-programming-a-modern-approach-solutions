# Chapter 20 - Exercise 13

If `n` is an `unsigned int` variable, what effect does the following statement have on the bits in `n`?

```
n &= n - 1;
```

_Hint_: Consider the effect on `n` if this statement is executed more than once.

---

The given statement is shorthand for:  

```
n = n & (n - 1);
```

Suppose `n = 0xB6`, its least significant byte is `1011 0110`, evaluation of the statement is as follows:  

```
n = 0xB6      & (0xB6 - 1)
n = 1011 0110 & 1011 0101
n = 1011 0100
n = 0xB4
```

A second execution of the statement:  

```
n = 0xB4      & (0xB4 - 1)
n = 1011 0100 & 1011 1000
n = 1011 0000
n = 0xB0
```

A third:  

```
n = 0xB0      & (0xB0 - 1)
n = 1011 0000 & 1010 1000
n = 1010 0000
n = 0xA0
```

The statement clears the least significant bit of `n`.
