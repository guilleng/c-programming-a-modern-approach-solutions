# Chapter 09 - Exercise 11

Write the following function:

```
float compute_GPA(char grades[], int n);
```

The grades array will contain letter grades (`A`, `B`, `C`, `D` or `F`, either upper-case or lower-case); `n` is the length of the array. The function should return the average of the grades (assume that `A = 4`, `B = 3`, `C = 2`, `D = 1` and `F = 0`).

---

```
float compute_GPA(char grades[], int n);

...

float compute_GPA(char grades[], int n)
{
    int accumulator = 0;
    for(int i = 0; i < n; i++)
    {
        switch(grades[i])
        {
            case 'A': case 'a':
                accumulator += 4;
                break;
            case 'B': case 'b':
                accumulator += 3;
                break;
            case 'C': case 'c':
                accumulator += 2;
                break;
            case 'D': case 'd':
                accumulator += 1;
                break;
            default:
                break;
        }
    }

    return (float) accumulator / n;
}
```
