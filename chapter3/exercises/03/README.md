# Chapter 03 - Exercise 03

For each of the following pairs of `scanf` format strings, indicate wehter or not the two strings are equivalent. If they're not, show how they can be distinguished.

(a) `"%d"` versus `" %d"`   
(b) `"%d-%d-%d"` versus `"%d -%d -%d"`  
(c) `"%f"` versus `"%f "`  
(d) `"%f,%f"` versus `"%f, %f"`  

---

(a) The format strings are equivalent.  
The leading whitespace before the format specifier is ignored and only the "%d" is used as the format specifier to indicate that the input should be read as a decimal integer.   

(b) The format strings are not equivalent.   
The first format specifier "%d-%d-%d" is looking for three integers separated by a dash, while the second format specifier "%d -%d -%d" is looking for three integers separated by spaces and leaded by a dash.  

(c) They are not equivalent.   
The format specifier "%f" is used to read a floating-point number, while the second pattern will read a float, then skip to the next non-withe-space character. Because there is none, the program will 'hang' until the user enters a nonblank character.  

(d) The format strings are equivalent.  
The leading whitespace before the format specifier is ignored and only the "%f" is used as the format specifier to indicate that the input should be read as a floating-point number.  
