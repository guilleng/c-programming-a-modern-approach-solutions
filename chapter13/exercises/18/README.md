# Chapter 13 - Exercise 18

Write the following function:

```C
void remove_filename(char *url);
```

`url` points to a string containing a URL (Uniform Resource Locator) that ends
with a file name (such as `"http://www.knking.com/index.html"`).  The function
should modify the string by removing the file name and the preceding slash.  (In
this example, the result will be `"http://www.knking.com"`.)  Incorporate the
"search for the end of a string" idiom into your function.  _Hint_: Have the
function replace the last slash in the string by a null character.


---

```C
void remove_filename(char *url)
{
    while (*url)
    {
        url++;
    }
    while (*url != '/')
    {
        url--;
    }
    *url = '\0';
}
```
