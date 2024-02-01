# Chapter 26 - Exercise 03

Extend the function of Exercise 2 so that it allows two conversion
specifications: `%d` and `%s`.  Each `%d` in the format string indicates an int
argument, and each `%s` indicates a `char *` (string) argument. 


---

```C
/* 
 * Helper function that prints a string and updates the count of the 
 * `chars_printed` counter.
 */
void printstring(const char *s, int *chars_printed)
{
    while (*s)
    {
        putchar(*s++);
        (*chars_printed)++;
    }
}

int x_printf_extended(const char *format, ...)
{
    va_list ap;
    int chars_printed = 0;

    if (format == NULL)
    {
        return -1;
    }
    va_start(ap, format);

    while(*format)
    {
        if (*format == '%' && *(format + 1) == 'd')
        {
            int num = va_arg(ap, int);
            printnumber(num, &chars_printed);    /* Definition in exercise 01 */ 
            format += 2;
            continue;
        }
        else if (*format == '%' && *(format + 1) == 's')
        {
            char *s = va_arg(ap, char*);
            if (s == NULL)
            {
                return -1;
            }
            printstring(s, &chars_printed);
            format += 2;
            continue;
        }
        else if (*format == '%' && (*(format + 1) != 'd' && *(format + 1) != 's'))
        {
            format += 2;
            continue;
        }
        chars_printed += (putchar(*format) > 0);
        format++;
    }

    va_end(ap);
    return chars_printed;
}
```
