# Chapter 12 - Exercise 15

Write a loop that prints all temperature readings stored in row `i` of the
`temperatures` array (see Exercise 14).  Use a pointer to visit the elements of
the row.


---

```C
int *p = temperatures[i];
while (p < temperatures[i] + 24)
{
    printf("%d ", *p++);
}
```
