# Chapter 13 - Exercise 06

Write a function named `censor` that modifies a string by replacing every
occurrence of `foo` by `xxx`.  For example, the string `"food fool"` would
become `"xxxd xxxl"`.  Make the function as short as possible without
sacrificing clarity.


---

```C
void censor(char *s)
{
    while(*s)
    {
        if(*s == 'f' && *(s + 1) == 'o' && *(s + 2) == 'o')
        {
            strncpy(s, "xxx", 3);
            s += 3;
        }
        else
        {
            s++;
        }
    }
    
    return;
}
```
