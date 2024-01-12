# Chapter 06 - Exercise 07

Translate the program fragment of Exercise 2 into a single `for` statement. 


---

`do ... while` loop of Exercise 2:

```C
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```

Translation:

```C
for (int i = 9384; i > 0; i /= 10)
{
    printf("%d ", i);
}
```
