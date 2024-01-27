# Chapter 21 - Exercise 07

In which standard header would you expect to find each of the following?

(a) A function that determines the current day of the week

(b) A function that tests whether a character is a digit

(c) A macro that gives the largest unsigned int value

(d) A function that rounds a floating-point number to the next higher integer

(e) A macro that specifies the number of bits in a character

(f) A macro that specifies the number of significant digits in a double value

(g) A function that searches a string for a particular character

(h) A function that opens a file for reading


---

(a) `time.h` provides functions to manipulate date and time information.

(b) `ctype.h`  declares a set of functions to classify and transform individual
characters.

(c) `limits.h` defines constants with the limits of fundamental integral types. 

(d) `math.h` contains a set of rounding functions.

(e) `limits.h` declares the macro `CHAR_BIT` which specifies the number of bits
a `char` value occupies.

(f) `float.h` defines the macro `DBL_DIG` which represents the number of decimal
digits that can be represented without losing precision.

(g) `string.h` declares `strpbrk` and `strrchr` that return a pointers to the
first and last occurrence a character in a string.

(h) `stdio.h` provides buffered streams I/O interfaces. 
