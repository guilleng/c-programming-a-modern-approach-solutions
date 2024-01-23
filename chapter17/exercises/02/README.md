# Chapter 17 - Exercise 02

Write a function named `duplicate` that uses dynamic storage allocation to
create a copy of a string.  For example, the call  

```C
p = duplicate(str);
```

would allocate space for a string of the same length as `str`, copy the contents
of `str` into the new string, and return a pointer to it.  Have `duplicate`
return a null pointer if the memory allocation fails.


---

Assumes `str` is a null-terminated string.

```C
char *duplicate(char *str)
{
    char *q;
    void *p;
    size_t i;

    for (q = str, i = 0; *q; q++, i++);

    p = malloc(sizeof(char) * (i + 1));
    if (p == NULL)
    {
        fprintf(stderr, "Error: failed allocation\n");
        exit(EXIT_FAILURE);
    }

    for (q = p; *str; str++, q++)
    {
        *q = *str;
    }
    *q = '\0';

    return p;
}
```
