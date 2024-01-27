# Chapter 21 - Exercise 03

When a macro hides a function, which must come first in the header file: the
macro definition or the function prototype?  Justify your answer.


---

The function prototype has to come before the macro definition for the
preprocessor to be aware that there is a function with a matching name. 
