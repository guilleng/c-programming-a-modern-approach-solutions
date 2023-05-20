# Chapter 20 - Exercise 04

In computer graphics, colors are often stored as three numbers, representing red, green, and blue intensities. Suppose that each number requires eight bits, and we’d like to store all three values in a single long integer. Write a macro named `MK_COLOR` with three parameters (the red, green, and blue intensities). `MK_COLOR` should return a `long` in which the last three bytes contain the red, green, and blue intensities, with the red value as the last byte and the green value as the next-to-last byte.

---

Assuming the values `r`, `g` and `b` displayed below, and only showing the significant bytes of our expected result, it is observable:  

```
r = 0x81;     /* 0000 0000 0000 0000 1000 0001 */
g = 0xC3;     /* 0000 0000 0000 0000 1100 0011 */
b = 0xE7;     /* 0000 0000 0000 0000 1110 0111 */

g <<= 8;      /* 0000 0000 1100 0011 0000 0000 */
b <<= 16;     /* 1110 0111 0000 0000 0000 0000 */

rgb = r | g | b;  /* 1110 0111 1100 0011 1000 0001 */
```

Condensing the declarations into one statement: 

```
#define MK_COLOR(r,g,b)  (((b) << 16) | ((g) << 8) | (r))
```
