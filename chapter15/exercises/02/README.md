# Chapter 15 - Exercise 02

Which of the following should _not_ be put in a header file? Why?

(a) Function prototypes.

(b) Function definitions.

(c) Macro definitions.

(d) Type definitions.


---

(b) Function definitions should not be put in a header file.

The implementation details of a function (the procedure it performs) should be
placed in a source file.  The header must only contain a prototype describing
the function's signature and return type.  This separation ensures that the
program interface is decoupled from the internal procedures implementations rely
on.

(c) 
This is a nuanced question.  While some preprocessor computations/macros may be
simple enough to be defined in the interface, others are better hidden away.  As
a general rule, preprocessor symbol definitions that need to be shared and can
only be achieved through the preprocessor should be placed in a header file.
This allows other source files to access and utilize those shared definitions.

