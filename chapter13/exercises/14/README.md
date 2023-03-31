# Chapter 13 - Exercise 14

What does the following program print?

```
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

The `for` loop 'traverses' the array `s` executing its statement sequentially for all its elements as long as `*p` is not the `null` byte.
The statement `--*p` is shorthand for `--(*p)`. This dereferences 'p' and then decrements the value it points to, yielding the previous character as in the ASCII table.

Output: `"Grinch\n"`
