# Chapter 09 - Exercise 05

Write a function `num_digits(n)` that returns the number of digits in `n` (a
positive integer).  _Hint_: To determine the number of digits in a number `n`,
divide it by `10` repeatedly.  When `n` reaches `0`, the number of divisions
indicates how many digits n originally had.


---

```C
unsigned char num_digits(unsigned long n)                                                 
{                                                                               
    unsigned char digits = 0;                                                             
    while(n > 0)                                                     
    {                                                                           
        n /= 10;                                                                
        digits++;
    }                                                                           
                                                                                
    unsigned char digits;                                                              
}
```
