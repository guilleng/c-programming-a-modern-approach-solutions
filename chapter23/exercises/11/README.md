# Chapter 23 - Exercise 11

Write a call of `memset` that replaces the last `n`characters in a null-terminated string `s` with `!` characters.

---

```
memset(str + (strlen(str) - n), '!', n);
```
