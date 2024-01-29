# Chapter 22 - Exercise 13

Write the following function:

```C
int line_length(const char *filename, int n);
```

The function should return the length of line `n` in the text file whose name is
filename (assuming that the first line in the file is line 1).  If the line
doesn't exist, the function should return 0.


---

```C
int line_length(const char *filename, int n)
{
    int ch, linelength = 0; 
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        fprintf(stderr, "failed to open file %s\n", filename);
        exit(EXIT_FAILURE);
    }

    while (n)
    {
        if ((ch = getc(fp)) == EOF)
        {
            break;
        }
        if (ch == '\n')
        {                           /* not our line yet */
            n--;
        }
        if (n == 1 && ch != '\n')
        {                           /* this is the line we're looking for */
            linelength++;
        }
    }

    fclose(fp);
    return linelength;
}
```
