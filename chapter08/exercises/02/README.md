# Chapter 08 - Exercise 02

The Q&A section shows how to use a letter as an array subscript.  Describe how to
use a `digit` (in character form) as a subscript.


---

Treating characters as integers and 'scaling' the digit when using it as a
subscript. The array has to have size 10.

Below a code snippet showing the mechanism: 

```C
int digits[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
char digit = '6';

if (digits[digit - '0'] == digits[6] && digits[digit - '0'] == 6)
    printf("True");         // This statement executes
```
