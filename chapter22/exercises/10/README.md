# Chapter 22 - Exercise 10

The `fcopy.c` program has one minor flaw: it doesn't check for errors as it's
writing to the destination file.  Errors during writing are rare, but do
occasionally occur (the disk might become full, for example).  Show how to add
the missing error check to the program, assuming that we want it to display a
message and terminate immediately if an error occurs.


---

See `fcopy.c`.
