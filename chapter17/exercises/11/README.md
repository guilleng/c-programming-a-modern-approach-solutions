# Chapter 17 - Exercise 11

Write the following function

```C
int count_occurrences(struct node *list, int n);
```

The `list` parameter points to a linked list; the function should return the
number of times that `n` appears in this list.  Assume that the `node` structure
is the one defined in Section 17.5. 


---

```C
int count_occurrences(struct node *list, int n)
{
    int sum = 0;
    
    for ( ; list; list = list->next)
    {
        if (list->value == n)
        {
            sum++;
        }
    }

    return sum;
}
```
