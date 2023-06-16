# Chapter 26 - Exercise 04

Write a function named `display` that takes any number of arguments. The first argument must be an integer. The remaining arguments will be strings. The first argument specifies how many strings the call contains. The function will print the strings on a single line, with adjacent strings separated by one space.  For example, the call  

```
display(4, "Special", "Agent", "Dale", "Cooper"); 
```

will produce the following output: 

```
Special Agent Dale Cooper
```

---

```
void display(int nelems, ...)
{
    va_list ap;
    char *current_arg;

    va_start(ap, nelems);
    while (nelems)
    {
        char *s = va_arg(ap, char*);
        if (s == NULL)
        {
            return;
        }
        printf("%s", s);
        nelems--;
        putchar(nelems ? ' ' : '\0');
    } 

    va_end(ap);
    return;
}
```
