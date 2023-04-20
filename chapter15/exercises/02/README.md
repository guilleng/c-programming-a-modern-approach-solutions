# Chapter 15 - Exercise 02

Which of the following should _not_ be put in a header file? Why?

(a)
Function prototypes.  

(b)
Function definitions.  

(c)
Macro definitions.  

(d)
Type definitions.  

---

(b)
Function definitions. The procedure that a function performs should be on a source file because it may rely on some other procedure that the program interface has no business in being aware of.

(c)
This may be a nontrivial question. Some preprocessor computations/macros may be simple enough to be defined on the interface, but others are best hidden away. 
As a rule of thumb preprocessor symbol definitions of things that need to be shared and that can only be accomplished via the preprocessor should be put in a header file.
