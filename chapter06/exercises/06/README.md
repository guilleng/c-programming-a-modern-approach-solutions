# Chapter 06 - Exercise 06

Translate the program of Exercise 1 into a single `for` statement.


---

While loop as in exercise 1:

```C
i = 1;
while (i <= 128) {
    printf("%d ", i);
    i *=2;
}
```

Translation:

```C
for (int i = 1; i <= 128; i*=2)
{
    printf("%d ", i);
}
```
