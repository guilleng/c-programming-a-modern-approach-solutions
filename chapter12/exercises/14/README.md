# Chapter 12 - Exercise 14

Assume that the following array contains a week's worth of hourly temperature
readings, with each row containing the readings for one day:

```C
int temperatures[7][24];
```

Write a statement that uses the `search` function (see Exercise 7) to search the
entire `temperatures` array for the value 32.


---

The following statement yields true if the value `32` is in the array
temperatures.

```C
search((const int *) temperatures, 7 * 24, 32);
```

