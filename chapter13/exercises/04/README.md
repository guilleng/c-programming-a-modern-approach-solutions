# Chapter 13 - Exercise 04

Modify the `read_line` function in each of the following ways:  

(a) Have it skip white space before beginning to store input characters.  
(b) Have it stop reading at the first white space character. _Hint_: To determine whether or not a character is white space, call the `isspace` function.  
(c) Have it stop reading at the first newline character, then store the newline character in the string.  
(d) Have it leave behind characters that it doesn't have room to store.  

---

Transcription of the original function (page 287):  

```
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar() != '\n')
        if (i <= n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
```

(a)
```
int read_line(char *str, int n)
{
    int ch, i = 0;

    while ((ch = getchar()) == ' ')
    {
        /* skip withe spaces */;
    }
    
    while (ch != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }

    str[i] = '\0';
    return i;
}
```
(b)
```
#include <ctype.h> 
...
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while (i < n)
    {
        ch = getchar();
        if (isspace(ch))
        {
            break;
        }
        str[i++] = ch;
    }

    str[i] = '\0';
    return i;
}
```

(c)
```
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }

    str[i] = ch;
    return i;
}
```

(d)
```
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) != '\n' && i < n)
    {
        str[i++] = ch;
    }

    str[i] = '\0';
    return i;
}
```
