# Chapter 15 - Exercise 01

Section 15.1 listed several advantages of dividing a program into multiple
source files.

(a) Describe several other advantages.

(b) Describe some disadvantages.


---

(a)
+ Code readability and maintenance can be improved in a more general sense.  It
  may even be feasible to understand the overall structure of a well-designed
  program by glancing at its codebase filenames and having a vague understanding
  of how they interact with each other.

+ It becomes easier to break down developing, testing, and debugging tasks into
  smaller, manageable parts by leveraging "modularity."  This allows parts of
  the program to be isolated and only accessible from within specific
  procedures.

(b)
+ Code readability and maintenance can also be negatively affected.  In general,
  poor design choices can obfuscate the program's design.

+ It can be challenging to modify and/or maintain codebases that have too many
  interdependencies, resulting in a phenomenon known as "spaghettification."

+ For certain programs, splitting them into multiple source files may introduce
  unnecessary complexity.
