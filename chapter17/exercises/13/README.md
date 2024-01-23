# Chapter 17 - Exercise 13

The following function is supposed to insert a new node into its proper place in
an ordered list, returning a pointer to the first node in the modified list.
Unfortunately, the function doesn't work correctly in all cases.  Explain what’s
wrong with it and show how to fix it.  Assume that the `node` structure is the
one defined in Section 17.5.

```C
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *cur = list, *prev = NULL;
    while (cur->value <= new_node->value)
    {
        prev = cur;
        cur = cur->next;
    }
    prev->next = new_node;
    new_node->next = cur;
    return list;
}
```

---

If the list is empty, the expression `cur->value` in the loop condition
dereferences a `NULL` pointer which causes undefined behavior.

If the value to insert is greater than all values in a non-empty list, the same
behavior as mentioned above is exhibited.  For example, if the list is `1 2 3`
and `new_node->value = 10`, the loop will continue until it reaches the end of
the list, resulting in `cur` being a `NULL` pointer.

If the value to insert is smaller than all values in a non-empty list, the
expression `prev->next` dereferences a `NULL` pointer.  For instance, if the
list is `1 2 3` and `new_node->value = 0`, the loop will not execute, and `prev`
will be `NULL`.  Thus, the assignment `prev->next = new_node` will dereference a
`NULL` pointer.


```C
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *cur = list, *prev = NULL;

    if (cur == NULL)
    {
        /* empty list */
        list = new_node;
        new_node->next = prev;
        return list;
    }
    else if (cur->value >= new_node->value)
    {
        /* insert at head */
        new_node->next = list;
        list = new_node;
        return list;
    }
    while (cur)
    {
        /* insert between two existing nodes or at tail */
        prev = cur;
        cur = cur->next;
        if(cur && new_node->value <= cur->value) 
        {
            break;
        }
    }
    prev->next = new_node;
    new_node->next = cur;

    return list;
}
```
