# Chapter 13 - Exercise 04

Modify the `read_line` function in each of the following ways:  

(a) Have it skip white space before beginning to store input characters.  
(b) Have it stop reading at the first white space character. _Hint_: To determine whether or not a character is white space, call the `isspace` function.  
(c) Have it stop reading at the first newline character, then store the newline character in the string.  
(d) Have it leave behind characters that it doesn't have room to store.  

---

Original definition of the function:  

```
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) != '\n')
        if (i < n)
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

    while ((ch = getchar()) != '\n') 
	{
        if (i == 0 && isspace(ch))
        {
			/* skip withe spaces */;
        }
        else if (i < n)
        {
            str[i++] = ch;
        }
    }

    str[i] = '\0';
    return i;
}
```

(b)
```
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while (!isspace(ch = getchar()))
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }

    str[i] = '\0';
    return i;
}
```

(c)
```
int read_line(char str[], int n)
{
    int ch, i = 1;
    
    do {
        ch = getchar();
        if (i < n)
        {
            str[i++] = ch;
        }
    } while (ch != '\n')

    str[i] = '\0';
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
