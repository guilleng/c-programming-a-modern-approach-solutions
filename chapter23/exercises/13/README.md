# Chapter 23 - Exercise 13

Use `strtok` to write the following function:

```
int count_words(char *sentence);
```

`count_words` returns the number of words in the string sentence, where a "word" is any sequence of non-white-space characters. `count_words` is allowed to modify the string.

---

```
int count_words(char *s)
{
    int count;

    if (s == NULL || *s == '\0')
    {
        /* Handle empty string or NULL pointer */
        return 0;
    }

    count = strtok(s, " \t\n\v\f\r") ? 1 : 0;

    if (count)
    {
        while (strtok(NULL, " \t\n\v\f\r"))
        {
            count++;
        }
    }
    return count;
}
```
