# Chapter 17 - Exercise 07

The following loop is supposed to delete all nodes from a linked list and
release the memory they occupy.  Unfortunately, the loop is incorrect.  Explain
what's wrong with it and show how to fix the bug.

```C
for (p = first; p != NULL; p = p->next)
    free(p);
```


---

The loop is releasing the memory of a node in the list, then attempts to
traverse it by dereferencing a pointer to deallocated memory, which causes
undefined behavior.

The bug can bu fixed by introducing an extra pointer `q` that follows `p` and
keeps tracks of the successive objects to be freed in the list.

```
struct node *p = first;
while (p)
{
    struct node *q = p;
    p = p->next;
    free(q);
}
```

