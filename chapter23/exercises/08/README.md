# Chapter 22 - Exercise 08 

Use `strchr` to write the following function: 

```
int numchar(const char *s, char ch); 
```

`numchar` returns the number of times the character `ch` occurs in the string `s`.  

---

```
int numchar(const char *s, char ch)
{
    int count = 0;

    while (*s)
    {
        const char *p = s;

        if (p = strchr(p, ch))
        {
            count++;
            s = p + 1;
        }
        else
        {
            break;
        }
    }

    return count;
}
```
