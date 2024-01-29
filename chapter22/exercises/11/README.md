# Chapter 22 - Exercise 11

The following loop appears in the `fcopy.c` program:

```C
while ((ch = getc(source_fp)) != EOF)
    putc(ch, dest_fp);
```

Suppose that we neglected to put parentheses around `ch = getc(source_fp)`: 

```C
while (ch = getc(source_fp) != EOF)
    putc(ch, dest_fp);
```

Would the program compile without an error? If so, what would the program do
when it’s run?


---

The program will compile without errors.  To analyze its behavior, let's add
some parentheses according to the operator precedence rules:

```C
while (ch = (getc(source_fp) != EOF))
    putc(ch, dest_fp);
```

The while condition evaluation will be either true (1) or false (0), depending
on whether the character retrieved from `source_fp` is equal to `EOF`.

If `ch` is assigned the value `1`, The loop evaluate its condition and write the
character `SOC` (Start of Heading) to the file. 

In conclusion, the program will write the value 1 repeatedly to the `dest_fp`
file.  If `source_fp` does not contain an `EOF` character, the loop will execute
indefinitely.
