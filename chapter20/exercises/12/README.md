# Chapter 20 - Exercise 12

The following function supposedly combines two bytes to form an unsigned short integer. Explain why the function doesn't work and show how to fix it.

```
unsigned short create_short(unsigned char high_byte,
                            unsigned char low_byte)
{
    return high_byte << 8 + low_byte;
}
```

---

The issue with the original function is that the binary addition operator has higher precedence than the bitwise shift operator. This means that the `return` expression is evaluated as `high_byte << (8 + low_byte)`, which is not the intended operation. By adding parentheses, the function behaves as expected:  

```
unsigned short create_short(unsigned char high_byte,
                            unsigned char low_byte)
{
    return (high_byte << 8) + low_byte;
}
```
