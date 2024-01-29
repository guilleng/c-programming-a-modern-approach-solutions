# Chapter 22 - Exercise 14

(a) Write your own version of the `fgets` function.  Make it behave as much like
the real `fgets` function as possible; in particular, make sure that it has the
proper return value.  To avoid conflicts with the standard library, don't name
your function `fgets`.

(b) Write your own version of `fputs`, following the same rules as in part (a). 


---

(a)
```C
/*
 * Reads in at most one less than size characters from stream and stores 
 * them into the buffer pointed to by s.  Reading stops after an EOF or a 
 * newline.  If a newline is read, it is stored into the buffer.  A terminating
 * null byte ('\0') is stored after the last character in the buffer.
 *
 * Returns s on success, and NULL on error or when end of file occurs while no
 * characters have been read.
 */
char *x_fgets(char *s, int size, FILE *stream)
{
    char *p = s;
    int ch;

    if (size < 1 || stream == NULL)
    {
        return NULL;
    }

    while (p < (s + size - 1))
    {
        ch = getc(stream);
        if (ch == EOF)
        {
            break;
        }

        *p = ch;
        p++;

        if (ch == '\n')
        {
            break;
        }
    }
    *p = '\0';

    if (p == s || ferror(stream))
    {
        return NULL;
    }

    return s;
}
```

(b)
```C
/* 
 * Writes the string s to stream, without its terminating null byte ('\0'). 
 * Returns a nonnegative number on success, or EOF on error. 
 */
int x_fputs(const char *s, FILE *stream)
{   
    if (s == NULL || stream == NULL)
    {   
        return EOF;
    }

    while (*s)
    {
        int ch = putc(*s, stream);
        if (ch != *s || ferror(stream))
        {
            return EOF;
        }
        s++;
    }
    return 1;
}
```
