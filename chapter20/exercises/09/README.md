# Chapter 20 - Exercise 09

(a) Write the following function:

```C
int count_ones(unsigned char ch);
```

`count_ones` should return the number of 1 bits in `ch`.

(b) Write the function in part (a) without using a loop.


---

(a)

```C
int count_ones(unsigned char ch)                                                
{                                                                               
    int i, count = 0;                                                           
    for (i = sizeof(char) * 8; i; i--)                                          
    {                                                                           
        count += (0x01 & ch );                                                
        ch >>= 1;                                                               
    }                                                                           
    return count;                                                               
}
```

```C
int count_ones(unsigned char ch)                                                
{                                                                               
    int count = 0;                                                           
    while (ch)
    {                                                                           
        count += (0x01 & ch );                                                
        ch >>= 1;                                                               
    }                                                                           
    return count;                                                               
}
```

(b)

```C
int count_ones(unsigned char ch)                                         
{                                                                               
    return (ch      & 0x01) +                                                   
           (ch >> 1 & 0x01) +                                                   
           (ch >> 2 & 0x01) +                                                   
           (ch >> 3 & 0x01) +                                                   
           (ch >> 4 & 0x01) +                                                   
           (ch >> 5 & 0x01) +                                                   
           (ch >> 6 & 0x01) +                                                   
           (ch >> 7 & 0x01);                                                    
}
```
