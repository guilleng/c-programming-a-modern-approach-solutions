# Chapter 26 - Exercise 02

Write a simplified version of `printf` in which the only conversion specification is `%d`, and all arguments after the first are assumed to have `int` type. If the function encounters a `%` character that's not immediately followed by a `d` character, it should ignore both characters.  The function should use calls of `putchar` to produce all output. You may assume that the format string doesn't contain escape sequences.

---

```
/* 
 * Helper function that prints an integer and updates the count of the 
 * `chars_printed` counter
 */
void printnumber(int num, int *chars_printed)
{
    if (num < 0) 
    {
        putchar('-');
        num = -num;
        (*chars_printed)++;
    }
    if (num == 0)
    {
        putchar('0');
        (*chars_printed)++;
    }
    if (num / 10)
    {
        printnumber(num / 10, chars_printed);
    }
    putchar(num % 10 + '0');
    (*chars_printed)++;
}

int x_printf(const char *format, ...)
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
            printnumber(num, &chars_printed);
            format += 2;
            continue;
        }
        else if (*format == '%' && *(format + 1) != 'd')
        {
            format += 2;
            continue;
        }

        putchar(*format++);
        chars_printed++; 
    }
    return chars_printed;
}
```
