# Chapter 13 - Exercise 14

What does the following program print?

```C
#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}
```


---

The `for` loop iterates over each element of th array `s`.  Its body statement
`--*p` can be read as `--(*p)`, thus `p` is dereferenced and the value it
points to is decremented.  This yields the previous character on the ASCII
table.

Output: `"Grinch\n"`
