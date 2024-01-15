# Chapter 09 - Exercise 03

Write a function `gcd(m, n)` that calculates the greatest common divisor of the
integers `m` and `n`.  (Programming Project 2 in Chapter 6 describes Euclid's
algorithm for computing the GCD.)


---

```C
int gcd(int m, int n)                                                           
{                                                                               
    while(n != 0)                                                                   
    {                                                                       
        int remainder;                                                      
        remainder = m % n;                                                  
        m = n;                                                              
        n = remainder;                                                      
    }                                                                       

    return m;                                                                   
}
```
