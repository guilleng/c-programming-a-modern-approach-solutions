# Chapter 16 - Project 02

Modify the inventory.c program of Section 16.3 so that the `p` (print) operation displays the parts sorted by part number.

---

Changes:

1. Created a header file `inventory.h`. Placed on this file the constant definition `NAME_LEN` and the structure tag `part`. This file needed to be included in `inventory.c`.  
2. The declaration of the inventory array which was made in a single statement with the structure tag definition, has been moved it into a separate statement in `inventory.c`.
3. Copied the `quicksort` header and source code files from Chapter 15 Project 03.  
4. Modified the interface file to include `inventory.h` in order to have access to the structure tag definition. The array type in the function prototypes had to be changed to `struct part`. The function comments were also modified accordingly.  
5. Modified the implementation file to be compatible with the required interface types.  
6. Added a new rule to the `makefile` script and modified the existing rules for compatibility with the `quicksort` interface.   
