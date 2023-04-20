# Chapter 15 - Exercise 01

Section 15.1 listed several advantages of dividing a program into multiple source files.  

(a)
Describe several other advantages.  

(b)
Describe some disadvantages.  

---

(a)
+ Code readability and maintenance might be improved in a more general sense. It may be even feasible to understand the general structure of a well-designed program by glancing at its codebase filenames and vaguely understanding how they interact within each other.  

+ Easier to atomize developing, testing and debugging tasks by leveraging "modularity". (Parts of the program are isolated and only accessible from within specific procedures.)  

(b)
+ Code readability and maintenance can also be hurt. In general, the design of a program may be obfuscated by bad design choices.  

+ Hard to modify and/or maintain codebases, with too many interdependencies. "Spaghettification".  

+ There might be a subset of programs for which splitting in multiple source files can add unnecessary complexity.  
