# Chapter 14 - Exercise 08

Suppose we want a macro that expands into a string containing the current line number and file name. In other words, we'd like to write  

```
const char *str = LINE_FILE;
```

and have it expand into  

```
const char *str = "Line 10 of file foo.c";
```

where `foo.c` is the file containing the program and 10 is the line on which the invocation of `LINE_FILE` appears. _Warning_: This exercise is for experts only. Be sure to read the Q&A section carefully before attempting!  

---

```
#define STRINGIFY(x)            #x                                              
#define TOSTRING(x)             STRINGIFY(x)                                    
#define LINE_FILE               "Line "TOSTRING(__LINE__)" of file "__FILE__
```

`LINE_FILE` is defined as the concatenation of:  

1. The literal `"Line "`.  
2. The result of stringifying the predefined macro `__LINE__`, which expands to an integer that contains the current line number in the source file.  
3. The literal `" of file "`.  
4. The predefined macro `__FILE__`, which expands to a string literal that contains the name of the current source file.  
