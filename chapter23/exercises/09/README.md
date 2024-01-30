# Chapter 23 - Exercise 09 

Replace the test condition in the following `if` statement by a single call of
`strchr`:

```C
if (ch == 'a' || ch == 'b' || ch == 'c') ...
```

---


```C
if (strchr("abc", ch) != NULL) 
{
    ...
}
```
