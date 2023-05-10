# Chapter 13 - Exercise 10

The following function supposedly creates an identical copy of a string. What's wrong with the function?

```
char *duplicate(const char *p)
{
    char *q;

    strcpy(q, p);
    return q;
}
```

---

The fact that `q` is a pointer to `char` that is not properly initialized (pointing to a memory location with enough space to store the string `p` points to). The call to `strcpy` may cause undefined behavior. 
