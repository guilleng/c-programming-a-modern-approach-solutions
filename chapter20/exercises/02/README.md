# Chapter 20 - Exercise 02

Describe a simple way to “toggle” a bit (change it from 0 to 1 or from 1 to 0). Illustrate the technique by writing a statement that toggles bit 4 of the variable i.

---

1. Create a bitmask where the bit to toggle is set to `1`. We can either use a hexadecimal number or shift a `1` to the position of the bit to toggle.  
2. Use bitwise XOR `^` to toggle the bit in some value using the bitmask:  

```
int bitmask = 1 << pos;
i = i ^ bitmask;
```
