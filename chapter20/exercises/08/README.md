# Chapter 20 - Exercise 08

Let f be the following function:

```
unsigned int f(unsigned int i, int m, int n)
{
    return (i >> (m + 1 - n)) & ~(~0 << n);
}
```

(a) What is the value of `~(~0 << n)`?  

(b) What does this function do?  

---

(a)
Suppose `n = 3`, and operations yield 2 byte values, outlining the operations in a step by step fashion:  

```
~(~0 << 3)          
~( 0xFFFF << 3)     /* ~0's complement is a value whose all bits are set to 1 */
~(   0xFFF9   )     /* Bitshifting yields  1111 1111 1111 1000 */
     0x0007         /* Whose complement is 0000 0000 0000 0111 */

~(~0 << 1)          /* Yields 0x0001 */
~(~0 << 2)          /* Yields 0x0003 */
~(~0 << 8)          /* Yields 0x00FF */
```

Thus ~(~0 << n) generates a bitmask whose `n` least significant bits are set to 1.  

(b)

Suppose `i = 0x9999`, `n = 1`, `m = 3`:   

```
(0x9999 >> (4 + 1 - 1)) & ~(~0 << 4)  /* i is 1001 1001 1001 1001 */
(0x9999 >> (    3    )) & ~(~0 << 4) 
(      0x1339         ) & ~(~0 << 4)  /* i is 0001 0011 0011 0011 */
       0x1339           &   0x000F
/*   
 *      0001 0011 0011 0011
 *   &  0000 0000 0000 1111
 *      0000 0000 0000 0011
 */
                
                0x003
```

The function `f` 'bit-slices' from `n` to `m` the number `i`. It extracts a range of bits from position `n` to position `m` (inclusive) and returns the result.
