# Chapter 22 - Exercise 05

Is there any difference between the `printf` conversion specifications `%.4d`
and `%04d`? If so, explain what it is.


---

Both conversion specifiers display the same representation of a given `int`
value.

The difference between them is that `%.4d` relies on precision, while `%04d`
uses a `0` flag in conjunction with the minimum field width to achieve the
desired conversion. 
