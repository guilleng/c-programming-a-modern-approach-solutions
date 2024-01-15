# Chapter 09 - Exercise 06

Write a function `digit(n, k)` that returns the k^th digit (from the right) in
`n` (a positive integer).  For example `digit(829, 1)` returns `9`, `digit(829,
2)` returns `2` and `digit(829, 3)` returns `8`.  If `k` is greater than the
number of digits in `n`, have the function return `0`.


---

```C
unsigned char digit(unsigned long n, int k)                                               
{                                                                               
    unsigned char kth_digit;                                                              
    while(k > 0)                                                                
    {                                                                           
        kth_digit = n % 10;                                                     
        n /= 10;                                                                
        k--;                                                                    
    }                                                                           
                                                                                
    return kth_digit;                                                           
}   
```
