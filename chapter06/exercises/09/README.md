# Chapter 06 - Exercise 09

Translate the `for` statement of Exercise 8 into a equivalent `while` statement.
You will need one statement in addition to the `while` loop itself.


---

The `for` loop of Exercise 8 is:

```C
for (i = 10; i >= 1; i /= 2)
    prinf("%d ", i++);
```

Translation:

```C
i = 10;
while (i >= 1)
{
    prinf("%d ", i++);
    i /= 2;
}
```
