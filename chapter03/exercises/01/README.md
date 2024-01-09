# Chapter 03 - Exercise 01

What output do the following calls of `printf` produce?

(a) `printf("%6d,%4d", 86, 1040);`

(b) `printf("%12.5e", 30.253);`

(c) `printf("%.4f", 83.162);`

(d) `printf("%-6.2g", .0000009979);`


---

(a)
The format specifier `%6d` prints an integer using a minimum field width of 6,
because the number to print (86) requires fewer digits, it is padded with empty
spaces. The format specifier `%4d` prints an integer using a minimum field width
of 4, `1040` is an exact match. 

<pre>
    86,1040  
</pre>

(b) 
The format specifier `%12.5e` prints a floating-point number in scientific
notation.  It specifies a minimum field width of 12, and with 5 digits after the
decimal point.

```C
3.0253e+01  
```

(c)
The format specifier `%.4f` is prints a floating-point number with exactly 4
digits after the decimal point.

```
83.1620  
```

(d)
Prints a floating-point number in either fixed-point or scientific notation,
depending on the magnitude of the number, with a minimum field width of 6,
left-justified, and with 2 significant digits.

```
1e-06  
```
