# Chapter 09 - Exercise 04

Write a function `day_of_year(month, day, year)` that returns the day of the
year (an integer between 1 and 366) specified by the three arguments.


---

```C
int day_of_year(int month, int day, int year)
{
    int days_in_month[12] = { 31, 28, 31, 30,                                   
                          // Jan Feb Mar Apr
                              31, 30, 31, 31,                                   
                          // May Jun Jul Aug 
                              30, 31, 30, 31 };
                          // Set Oct Nov Dec 
                                                                                
    if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )                 
    {                                                                           
        days_in_month[1]++;                                                     
    }                                                                           
                                                                                
    for(int i = 0; i < (month - 1); i++)                                        
    {                                                                           
        day += days_in_month[i];                                                
    }                                                                           
                                                                                
    return day;                                                                 
}
```
