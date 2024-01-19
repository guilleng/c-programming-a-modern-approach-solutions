# Chapter 13 - Exercise 05

(a) Write a function named `capitalize` that capitalizes all letters in its
argument.  The argument will be a null-terminated string containing arbitrary
characters, not just letters.  Use array subscripting to access the characters
in the string.  _Hint_: Use the `toupper` function to convert each character to
upper case.

(b) Rewrite the capitalize function, this time using pointer arithmetic to
access the characters in the string.


---

(a)
```C
void capitalize(char s[])                                                     
{                                                                               
    int i;                                                                      
    for (i = 0; s[i] != '\0'; i++)                                              
    {                                                                           
        s[i] = toupper(s[i]);                                                   
    }                                                                           
    return;                                                                     
}
```

(b)
```C
void capitalize(char *s)
{
    while (*s)
    {
        *s = toupper(*s++);
    }
    return;
}
```
