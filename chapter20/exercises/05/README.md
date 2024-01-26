# Chapter 20 - Exercise 05

Write macros named `GET_RED`, `GET_GREEN`, and `GET_BLUE` that, when given a
color as an argument (see Exercise 4), return its 8-bit red, green, and blue
intensities.


---

```C
#define GET_RED(c)       (0x0000FF & (c))
#define GET_GREEN(c)    ((0x00FF00 & (c)) >> 8)
#define GET_BLUE(c)     ((0xFF0000 & (c)) >> 16)
```
