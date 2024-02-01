# Chapter 26 - Exercise 09

Write a function that returns a random `double` value `d` in the range 
`0.0 <= d < 1.0`. 


---

```C
double random_double_range(double min, double max)
{
    double scaled = (double)rand() / RAND_MAX; 
    double range = max - min; 
    return min + (scaled * range); 
}
```

The call `random_double_range(0.0, 1.0);` evaluates to a random value in the
range of `d`. 
