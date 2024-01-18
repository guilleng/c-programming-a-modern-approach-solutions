# Chapter 12 - Exercise 16

Write a loop that prints the highest temperature in the `temperatures` array
(see Exercise 14) for each day of the week.  The loop body should call the
`find_largest` function, passing it one row of the array at a time.


---

```C
int day;
for (day =0; day < 7; day++)
{
    printf("Day: %d, Max temp: %d ", day, *find_largest(temperatures[day], 24));
}
```
