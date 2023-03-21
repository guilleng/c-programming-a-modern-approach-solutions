# Chapter 11 - Exercise 07

Write the following function:  

```
void split_date(int day_of_year, int year, int *month, int *day);
```

`day_of_year` is an integer between 1 and 366, specifying a particular day within the year designated by year. `month` and `day` point to variables in which the function will store the equivalent month (1-12) and day within that month (1-31).  

---

This function assumes that `day_of_year` may be assigned a value of 366 when and only when `year` is a leap year.  

```
void split_date(int day_of_year, int year, int *month, int *day);

...

void split_date(int day_of_year, int year, int *month, int *day)
{
    int days_in_month[12] = { 31, 28, 31, 30,                                   
                          // Jan Feb Mar Apr
                              31, 30, 31, 31,                                   
                          // May Jun Jul Aug 
                              30, 31, 30, 31 };
                          // Set Oct Nov Dec 
                                                
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
    {
        days_in_month[1]++;
    }

    *month = 0;
    while (days_in_month[*month] < day_of_year)
    {
        day_of_year -= days_in_month[*month];
        (*month)++;
    }

    (*month)++;
    *day = day_of_year;
    return;
}
```
