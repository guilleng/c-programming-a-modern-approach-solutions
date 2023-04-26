# Chapter 16 - Exercise 05

Write the following functions, assuming that the date structure contains three members: `month`, `day` and `year` (all of type `int`).

(a) 
```
int day_of_year(struct date d);
```

Returns the day of the year (an integer between 1 and 366) that corresponds to the date `d`.  

(b) 
```
int compare_dates(struct date d1, struct date d2);
```

Returns -1 if `d1` is an earlier date than `d2`, +1 if `d1` is a later date than `d2`, and 0 if `d1` and `d2` are the same.

---

(a)

```
int day_of_year(struct date d)
{
	int i, day_of_year = 0;
    const int days_in_month[12] = { 31, 28, 31, 30,                                   
                                /* Jan Feb Mar Apr */
                                    31, 30, 31, 31,                                   
                                /* May Jun Jul Aug */
                                    30, 31, 30, 31 };
                                /* Set Oct Nov Dec */
                                                
    if ( (d.year % 4 == 0 && d.year % 100 != 0) || d. year % 400 == 0 )
    {
        days_in_month[1]++;
    }

    for (i = 0; i < (d.month - 1); i++)
    {
        day_of_year += days_in_month[i];
    }

    return day_of_year + d.day;
}
```

(b)
```
/* Uses the function defined in part (a) */

int compare_dates(struct date d1, struct date d2)
{
	if (d1.y < d2.y)
	{   
		return -1;
	}
	else if (y2 < y1)
	{   
		return 1;
	}
    else if (day_of_year(d1) < day_of_year(d2))
    {
        return -1;
    }
    else if (day_of_year(d1) > day_of_year(d2))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
```
