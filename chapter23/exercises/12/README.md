# Chapter 23 - Exercise 12

Many versions of `<string.h>` provide additional (nonstandard) functions, such as those listed below. Write each function using only the features of the C standard.

(a) `strdup(s)` - Returns a pointer to a copy of `s` stored in memory obtained by calling `malloc`. Returns a null pointer if enough memory couldn't be allocated.  

(b) `stricmp(s1, s2)` - Similar to `strcmp`, but ignores the case of letters.  

(c) `strlwr(s)` - Converts upper-case letters in `s` to lower case, leaving other characters unchanged; returns `s`.  

(d) `strrev(s)` - Reverses the characters in `s` (except the null character); returns `s`.  

(e) `strset(s, ch)` - Fills `s` with copies of the character `ch`; returns `s`.

---

(a)
```
char *x_strdup(char *s)
{
    char *p;
    size_t len = 0;

    if (s == NULL)
    {
        return NULL;
    }

    while (*s)
    {
        len++, s++;
    }
    s -= len;

    p = malloc(sizeof(char) * (len + 1));
    if (p == NULL)
    {
        return NULL;
    }

    while (*s)
    {
        *p = *s;
        p++, s++;
    }
    *p = '\0';

    return p - len;
}
```

(b)
```
int stricmp(char *s1, char *s2)
{
    int cmp = 0;

    if (s1 == NULL)
    {
        /* Handle NULL pointer */
        return -1;
    }
    if (s2 == NULL)
    {
        /* Handle NULL pointer */
        return -1;
    }

    while (cmp == 0 && (*s1 || *s2))
    {
        cmp += (toupper(*s1) - toupper(*s2));
        s1++, s2++;
    }

    return cmp;
}
```

(c)
```
char *strlwr(char *s)
{
    char *p = s;

    if (s == NULL)
    {
        /* Handle NULL pointer */
        return NULL;
    }

    while (*p)
    {
        *p = tolower(*p);
        p++;
    }

    return s;
}
```

(d)
```
char *strrev(char *s)
{
    char *q = s, *p = s;

    if (s == NULL)
    {
        /* Handle NULL pointer */
        return NULL;
    }

    while (*p++);
    p -= 2;

    while (q < p)
    {
        char c = *q;
        *q = *p;
        *p = c;
        q++, p--;
    }

    return s;
}
```
    
(e)
```
char *strset(char *s, char ch)
{
    char *p = s;

    if (s == NULL)
    {
        /* Handle NULL pointer */
        return NULL;
    }

    while (*p)
    {
        *p = ch;
        p++;
    }

    return s;
}
```
