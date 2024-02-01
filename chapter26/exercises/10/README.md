# Chapter 26 - Exercise 10

Convert the following calls of `atoi`, `atol`, and `atoll` into calls of
`strtol`, `strtol`, and `strtoll`, respectively.

(a) `atoi(str)` 

(b) `atol(str)` 

(c) `atoll(str)`


---

(a)
```C
strtol(nptr, NULL, 10);
```

(b)
```C
strtol(nptr, NULL, 10);
```

(b)
```C
strtoll(nptr, NULL, 10);
```
