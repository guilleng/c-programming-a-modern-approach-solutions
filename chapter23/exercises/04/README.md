# Chapter 23 - Exercise 04

Using `isalpha` and `isalnum`, write a function that checks whether a string has
the syntax of a C identifier (it consists of letters, digits, and underscores,
with a letter or underscore at the beginning).


---

```C
int is_identifier(const char *s)
{
    if (!isalpha(*s) && (*s) != '_')
    {
        return 0;
    }
    s++;
    while (*s)
    {
        if (!isalnum(*s) && (*s) != '_')
        {
            return 0;
        }
        s++;
    }
    return 1;
}
```
