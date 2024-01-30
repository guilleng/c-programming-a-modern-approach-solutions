# Chapter 23 - Exercise 05

Using `isxdigit`, write a function that checks whether a string represents a
valid hexadecimal number (it consists solely of hexadecimal digits).  If so, the
function returns the value of the number as a long int.  Otherwise, the function
returns -1.


---

```C
long hex_to_long(const char *s)
{
    const char *p = s;

    while (*s)
    {
        if (!isxdigit(*s))
        {
            return -1;
        }
        s++;
    }

    return strtol(p, NULL, 16);
}
```
