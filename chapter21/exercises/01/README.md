# Chapter 21 - Exercise 01

Locate where header files are kept on your system. Find the nonstandard headers and determine the purpose of each.  

---

In Unix file systems, the standard header files are typically stored in the `/usr/include` directory. Some nonstandard headers are placed on this directory also.  

In addition, the directory `/usr/lib/gcc/x86_64-linux-gnu/*` (the exact path may vary depending on the architecture and compiler version) contains many nonstandard headers specific to the GCC compiler and the system architecture. It may include implementation-specific headers or headers that provide tailored definitions for system-specific features or optimizations.  

As such, some of these files may have the same names and definitions as the standard headers. When the GCC compiler searches for a header file during compilation, it gives preference to those located in `/usr/lib/gcc/x86_64-linux-gnu/*` over the standard files in `usr/include`. 
