# Chapter 08 - Exercise 04

(C99) Repeat Exercise 3, but this time use a designated initializer.  Make the
initializer as short as possible.


---

```C
#include <stdbool.h>
...
bool weekend[] = { [0] = true, [6] = true };
```
