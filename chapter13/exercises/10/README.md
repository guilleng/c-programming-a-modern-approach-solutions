# Chapter 13 - Exercise 10

The following function supposedly creates an identical copy of a string.  What's
wrong with the function?

```C
char *duplicate(const char *p)
{
    char *q;

    strcpy(q, p);
    return q;
}
```


---

The fact that `q` is a non-initialized pointer to `char`.  For the code to be
correct, `q` has to point to a memory location with enough space to store the
string `p` points to.
