# Chapter 17 - Exercise 06

Modify the `delete_from_list` function so that is uses only one pointer variable
instead of two (`cur` and `prev`).


---

The function as defined in Section 17.5 

```C
struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur, *prev;
    for (cur = list, prev = NULL;
         cur != NULL && cur->value != n;
         prev = cur, cur = cur->next)
    ;
    if (cur == NULL)
        return list;             /* n was not found */
    if (prev == NULL)
        list = list->next;       /* n is in the first node */
    else
        prev->next = cur->next;
        free(cur);               /* n is in some other node */
        return list;
}
```

Solution:

```C
struct node *delete_from_list(struct node *list, int n)
{
    struct node **p = &list;

    while (*p)
    {
        if ((*p)->value == n)
        {
            struct node *temp = *p;
            *p = (*p)->next;
            free(temp);
            break;
        }
        p = &(*p)->next;
    }

    return list;
}
