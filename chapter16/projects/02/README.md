# Chapter 16 - Project 02

Modify the inventory.c program of Section 16.3 so that the `p` (print) operation
displays the parts sorted by part number.


---

Changes:

1. Created a header file `inventory.h` and placed the constant definition
   `NAME_LEN` and the structure tag `part` in this file.  Included `inventory.h`
   in `inventory.c` to make use of these definitions.

2. Moved the declaration of the inventory array, which was originally combined
   with the structure tag definition, into a separate statement in
   `inventory.c`. 

3. Copied the header and source code files for the `quicksort` algorithm from
   Chapter 15 Project 03.

4. Modified the interface file to include `inventory.h` to access the structure
   tag definition.  Changed the array type in the function prototypes to `struct
   part` and adjusted the function comments accordingly.

5. Modified the implementation file to be compatible with the required interface
   types.

6. Added a new rule to the makefile script and modified the existing rules to
   ensure compatibility with the `quicksort` interface.
