# Chapter 26 - Exercise 05

Write the following function:

```C
char *vstrcat(const char *first, ...);
```

All arguments of `vstrcat` are assumed to be strings, except for the last
argument, which must be a null pointer (cast to `char *` type).  The function
returns a pointer to a dynamically allocated string containing the concatenation
of the arguments.  `vstrcat` should return a null pointer if not enough memory
is available.  _Hint_: Have `vstrcat` go through the arguments twice: once to
determine the amount of memory required for the returned string and once to copy
the arguments into the string.


---

```C
char *vstrcat(const char *first, ...)
{
    va_list ap;
    char *arg, *ret_string;
    int len = 0;

    len += strlen(first);

    va_start(ap, first);
    while ((arg = va_arg(ap, char*)) != NULL)
    {
        len += strlen(arg);
    }

    ret_string = malloc(sizeof(char) * (len + 1));
    if (ret_string == NULL)
    {
        return NULL;
    }

    strcat(ret_string, first);
    va_start(ap, first);
    while ((arg = va_arg(ap, char*)) != NULL)
    {
        strcat(ret_string, arg);
    }
    ret_string[len] = '\0';

    return ret_string;
}
```
