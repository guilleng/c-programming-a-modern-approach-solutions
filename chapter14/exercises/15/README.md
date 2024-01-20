# Chapter 14 - Exercise 15

Suppose that a program needs to display messages in either English, French or
Spanish.  Using a condition compilation, write a program fragment that displays
one of the following three messages, depending on whether or not the specified
macro is defined:

```C
Insert Disk 1       (if ENGLISH is defined)
Inserez Le Disque 1 (if FRENCH is defined)
Inserte El Disco 1  (if SPANISH is defined)
```


---

```C
/* #define ENGLISH */
/* #define FRENCH */
#define SPANISH

#ifdef ENGLISH                                                                  
#define INSERT_DISK         "Insert Disk 1"                                     
#endif                                                                          
                                                                                
#ifdef FRENCH                                                                   
#define INSERT_DISK         "Inserez Le Disque 1"                               
#endif                                                                          
                                                                                
#ifdef SPANISH                                                                  
#define INSERT_DISK         "Inserte El Disco 1"                                
#endif

...

puts(INSERT_DISK);
```
