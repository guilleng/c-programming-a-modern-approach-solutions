# Chapter 22 - Exercise 03

Find the error in the following program fragment and show how to fix it.

```C
FILE *fp;
if (fp = fopen(filename, "r")) {
    read characters until end-of-file
}
fclose(fp);
```

---

If the call to `fopen` fails, `fp` becomes an illegal stream pointer, and the
subsequent call to `fclose` may result in undefined behavior.

```C
FILE *fp = fopen(filename, "r");
if (fp == NULL)
{
    /* handle the failure to open file*/;
}
else
{
    /* read characters until end-of-file */;
    fclose(fp);
}
```
