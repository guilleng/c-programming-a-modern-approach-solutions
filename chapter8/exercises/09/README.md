# Chapter 08 - Exercise 09

Using the array of Exercise 8, write a program fragment that computes the average temperature for a month (averaged over all days of the month and all hours of the day).

---

The program fragment assumes `double temperature_readings[30][24];` is declared and initialized in previous statements.  

```
double average = 0.0;

for(int day = 0; day < 30; day++)
{
    for (int hour = 0; hour < 24; hour++)
    {
        average += temperature_readings[day][hour];
    }
}
average /= 30 * 24;
```
