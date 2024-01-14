# Chapter 08 - Exercise 03

Write a declaration of an array named weekend containing seven `bool` values. 
Include an initializer that makes the first and last values `true`; all other
values should be `false`.


---

Using C99's `bool` datatype:

```C
#include <stdbool.h>
...
bool weekend[7] = { true, 
                    false, false, false, false, false, 
                    true };
```
