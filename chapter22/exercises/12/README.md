# Chapter 22 - Exercise 12

Find the error in the following function and show how to fix it.  

```
int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0;
    if ((fp = fopen(filename, "r")) != NULL) 
    {
        while (fgetc(fp) != EOF)
            if (fgetc(fp) == '.')
                n++;
        fclose(fp);
    }
    return n;
}
```
---

There should be only one `fgetc()` call. The function retrieves a character from the file in the `while` condition and then again in the `if` condition.  
A possible solution is to introduce a variable to store the retrieved character and then test whether it is a dot or not.  

```
int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0;

    if ((fp = fopen(filename, "r")) != NULL) 
    {
        int ch;
        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch == '.')
            {
                n++;
            }
        }
        fclose(fp);
    }
    return n;
}
```

This function does not check for errors in the output and input files, which may result in unintended consequences.  
