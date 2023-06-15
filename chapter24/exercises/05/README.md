# Chapter 24 - Exercise 05

In the `inventory.c` program (see Section 16.3), the `main` function has a `for` loop that prompts the user to enter an operation code, reads the code, and then calls either `insert`, `search`, `update`, or `print`. Add a call of `setjmp` to main in such a way that a subsequent call of `longjmp` will return to the `for` loop. (After the `longjmp`, the user will be prompted for an operation code, and the program will continue normally.) `setjmp` will need a `jmp_buf` variable; where should it be declared?

---

The `longjump` variable should be scoped within the block of the `for` loop. This ensures the safe storage of the environment before any operations are performed on the database, and limits the potential loss of data to the current iteration of the program in case of an error.  

See `inventory.c`.  
