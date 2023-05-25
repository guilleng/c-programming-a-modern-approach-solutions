# Chapter 22 - Exercise 04

Show how each of the following numbers will look if displayed by `printf` with `%#012.5g` as the conversion specification:

(a) 83.7361  

(b) 29748.6607  

(c) 1054932234.0  

(d) 0.0000235218  

---

The format specifier `"%#012.5g"` has a minimum width of 12 characters, including any necessary zero-padding. It includes flag `#` that signals to not remove trailing zeros. The precision is set to a maximum of 5 digits after the decimal point.

(a)
`00000083.736`  

(b)
`000000029749`  

(c)
`001.0549e+09`  

(d)
`002.3522e-05`  
