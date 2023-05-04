# Chapter 17 - Exercise 12

Write the following function:  

```
struct node *find_last(struct node *list, int n);
```

The `list` parameter points to a linked list. The function should return a pointer to the _last_ node that contains `n`; it should return `NULL` if `n` doesn't appear in the list. Assume that the `node` structure is the one defined in Section 17.5.  

---

```
struct node *find_last(struct node *list, int n)
{
    struct node *p = NULL;

    for ( ; list; list = list->next)
    {
        if (list->value == n)
        {
            p = list;
        }
    }

    return p;
}
```
