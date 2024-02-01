# Chapter 26 - Exercise 06

Write the following function:

```C
char *max_pair(int num_pairs, ...);
```

The arguments of `max_pair` are assumed to be "pairs" of integers and strings;
the value of `num_pairs` indicates how many pairs will follow.  (A pair consists
of an `int` argument followed by a `char *` argument).  The function searches
the integers to find the largest one; it then returns the string argument that
follows it.  Consider the following call:

```C
max_pair(5, 180, "Seinfeld", 180, "I Love Lucy",
             39, "The Honeymooners", 210, "All in the Family",
             86, "The Sopranos")
```

The largest int argument is 210, so the function returns `"All in the Family"`,
which follows it in the argument list. 


---

```C
char *max_pair(int num_pairs, ...)
{
    va_list ap;
    int i;
    struct { int num; char* str; } largest, next;

    va_start(ap, num_pairs);

    largest.num = va_arg(ap, int);
    largest.str = va_arg(ap, char*);

    for (i = 1; i < num_pairs; i++)
    {
        next.num = va_arg(ap, int);
        next.str = va_arg(ap, char*);

        if (largest.num == next.num)
        {
            /* same integer values, compare strings lexicographically */
            int comp = strcmp(largest.str, next.str);

            if (comp == 0 || comp > 0)
            {
                continue;
            }
            else
            {
                largest = next;
            } 
        }
        else
        {
            largest = (largest.num > next.num) ? largest : next;
        }
    }
    va_end(ap);

    return largest.str;
}
```
