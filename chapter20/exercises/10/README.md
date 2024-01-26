# Chapter 20 - Exercise 10

Write the following function:

```C
unsigned int reverse_bits(unsigned int n);
```

`reverse_bits` should return an unsigned integer whose bits are the same as
those in `n` but in reverse order.


---

```C
#include <limits.h>        /* CHAR_BIT macro, number of bits in a `char` */

unsigned int reverse_bits(unsigned int n)
{
    unsigned int r = 0;
    size_t bits = sizeof(n) * CHAR_BIT;

    while (bits)
    {
        r <<= 1;
        r |= (n & 1); /* extract current bit */
        n >>= 1;
        bits--;
    }

    return r;
}
```
