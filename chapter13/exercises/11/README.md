# Chapter 13 - Exercise 11

The Q&A section at the end of this chapter shows how the `strcmp` function might be written using array subscripting. Modify the function to use pointer arithmetic instead.

---

The `strcmp` function as defined in the Q&A section:

```
int strcmp(char *s, char *t)
{
    int i;
    
    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}
```

Implementation using pointers:  

```
int strcmp(char *s, char *t)
{
    while (*s == *t)
    {
        if (!*s)
        {
            return 0;
        }
        s++, t++;
    }
    return *s - *t;
}
```
