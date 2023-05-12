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

As the for loop goes through the array `s`, it executes its statement sequentially for each of its elements, as long as `*p` is not the null byte.  
The statement `--*p` is a shorthand for `--(*p)`, where `p` is dereferenced and the value it points to is decremented, yielding the previous character based on the ASCII table.  

Output: `"Grinch\n"`
