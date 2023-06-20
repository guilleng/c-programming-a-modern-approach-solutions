# Chapter 26 - Exercise 12

Write a function that, when passed a year, returns a `time_t` value representing 12:00 a.m. on the first day of that year.

---

```
time_t set_midnight(int year)
{
    if (year < 1970)
    {
        /* Not a valid year, handle error */
        return -1;
    }
    struct tm t;

    t.tm_sec = 0;
    t.tm_min = 0;
    t.tm_hour = 0;
    t.tm_mday = 1;
    t.tm_mon = 0;
    t.tm_year = year - 1900;
    t.tm_yday = 0;
    t.tm_isdst = -1;

    time_t ret = mktime(&t);
    return ret;
}
```
