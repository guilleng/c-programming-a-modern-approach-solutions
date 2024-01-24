# Chapter 18 - Exercise 01

For each of the following declarations, identify the storage class, type
qualifiers, type specifiers, declarators, and initializers.

(a) `static char **lookup(int level);`

(b) `volatile unsigned long io_flags;`

(c) `extern char *file_name[MAX_FILES], path[];`

(d) `static const char token_buf[] = "";`


---

(a)  
Storage class: `static`.  
Type qualifiers: None.  
Type specifiers: `char`.  
Declarators:  `**`, `lookup` and `(int level)`.  
Initializers: None.  

(b)  
Storage class: `auto` by default.  
Type qualifiers: `volatile`.  
Type specifiers: `unsigned long`.  
Declarators:  `io_flags`.  
Initializers: None.  

(c)  
Storage class: `extern`.  
Type qualifiers: None.  
Type specifiers: `char`.  
Declarators:  `*`, `file_name` and `[MAX_FILES]` conform the first declarator
while `path` and `[]` form part of the second.  
Initializers: None.  

(d)  
Storage class: `static`.  
Type qualifiers: `const`.  
Type specifiers: `char`.  
Declarators:  `token_buf` and `[]`.  
Initializers: `""`.  
