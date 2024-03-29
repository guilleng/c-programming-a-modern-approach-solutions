# Chapter 13 - Exercise 16

Use the techniques of Section 13.6 to condense the `count_spaces` function of
Section 13.4.  In particular, replace the `for` statement by a `while` loop.


---

Original definition of the function:

```C
int count_spaces(const char s[])
{
    int count = 0, i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            count++;
    return count;
}
```

Condensed version:

```C
int count_spaces(const char *s)
{
    int count = 0;

    while (*s)
    {
        count += (*s++ == ' ');
    }

    return count;
}
```
