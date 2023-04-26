# Chapter 16 - Exercise 06

Write the following function, assuming that the `time` structure contains three members: `hours`, `minutes` and `seconds` (all of type `int`).  

```
struct time split_time(long total_seconds);
```

`total_seconds` is a time represented as the number of seconds since midnight. The function returns a structure containing the equivalent time in hours (0-23), minutes (0-59) and seconds (0-59).  

---

```
struct time split_time(long total_seconds)
{
    struct time new;

    new.hours = total_seconds / 3600;
    total_seconds -= new.hours * 3600;

    new.minutes = total_seconds / 60;
    total_seconds -= new.minutes * 60;
    
    new.seconds = total_seconds;

    return new;
}
```
