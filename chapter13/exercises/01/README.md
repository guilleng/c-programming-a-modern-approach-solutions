# Chapter 13 - Exercise 01

The following function calls supposedly write a single newline character, but some are incorrect. Identify which calls don't work and explain why.

(a) `printf("%c", '\n');`  
(b) `printf("%c", "\n");`  
(c) `printf("%s", '\n');`  
(d) `printf("%s", "\n");`  
(e) `printf('\n');`  
(f) `printf("\n");`  
(g) `putchar('\n');`  
(h) `putchar("\n");`  
(i) `puts('\n');`  
(j) `puts("\n");`  
(k) `puts("");`  

---

(a)
`printf("%c", '\n');`  
Valid. The format specifier expects a character argument and the newline character escape sequence is supplied.  

(b)
`printf("%c", "\n");`  
Not a valid `printf` call, the format specifier expects a character argument but it receives a pointer to a string array that contains the newline character plus the null character.  

(c)
`printf("%s", '\n');`  
Not a valid `printf` call. The format specifier `%s` expects a pointer to string that should be null-terminated. Instead it receives the newline character escape sequence, this statement reads from forbidden memory, causing undefined behavior.  

(d) 
`printf("%s", "\n");`  
Valid. The format specifier expects a pointer to a null-terminated string. The string literal passed contains the newline character plus the null character. 

(e) 
`printf('\n');`  
This function call is not valid. `printf` expects a format string as first argument.  

(f) 
`printf("\n");`  
Valid. The format string passed to the function contains the newline character plus the null character. 

(g) 
`putchar('\n');`  
Valid. 

(h) 
`putchar("\n");`  
Not valid. `putchar` expects its argument to be an `int` but it instead receives a `char *`.

(i) `puts('\n');`  
Not valid. `puts` expects its argument to be a `const char *`, not a `char`.  

(j) `puts("\n");`  
Not valid, two newline characters are written.  

(k) `puts("");`  
Valid. `puts` writes the empty string plus a trailing newline to stdout.  