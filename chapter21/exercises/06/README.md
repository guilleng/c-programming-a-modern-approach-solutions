# Chapter 21 - Exercise 06

The `<ctype.h>` header usually defines most of its functions as macros as well. These macros rely on a static array that's declared in `<ctype.h>` but defined in a separate file. A portion of a typical `<ctype.h>` header appears below. Use this sample to answer the following questions.  

(a) 
Why do the names of the “bit” macros (such as `_UPPER`) and the `_ctype` array begin with an underscore?  

(b) 
Explain what the `_ctype` array will contain. Assuming that the character set is ASCII, show the values of the array elements at positions 9 (the horizontal tab character), 32 (the space character), 65 (the letter `A`), and 94 (the `^` character). See Section 23.5 for a description of what each macro should return.  

(c)
What's the advantage of using an array to implement these macros?
    
```
#define _UPPER   0x01   /* upper-case letter */
#define _LOWER   0x02   /* lower-case letter */
#define _DIGIT   0x04   /* decimal digit */
#define _CONTROL 0x08   /* control character */
#define _PUNCT   0x10   /* punctuation character */
#define _SPACE   0x20   /* white-space character */
#define _HEX     0x40   /* hexadecimal digit */
#define _BLANK   0x80   /* space character */

#define isalnum(c)  (_ctype[c] & (_UPPER|_LOWER|_DIGIT))
#define isalpha(c)  (_ctype[c] & (_UPPER|_LOWER))
#define iscntrl(c)  (_ctype[c] & _CONTROL)
#define isdigit(c)  (_ctype[c] & _DIGIT)
#define isgraph(c)  (_ctype[c] &
                      (_PUNCT|_UPPER|_LOWER|_DIGIT))
#define islower(c)  (_ctype[c] & _LOWER)
#define isprint(c)  (_ctype[c] &
                      (_BLANK|_PUNCT|_UPPER|_LOWER|_DIGIT))
#define ispunct(c)  (_ctype[c] & _PUNCT)
#define isspace(c)  (_ctype[c] & _SPACE)
#define isupper(c)  (_ctype[c] & _UPPER)
#define isxdigit(c) (_ctype[c] & (_DIGIT|_HEX))
```

---

(a)
The names macros and the array begin with an underscore to follow the naming convention that reserves macro names starting with an underscore for use in the standard library. This helps avoid conflicts with user-defined names and ensures consistency.

(b)
The `_ctype` array contains bit-field values for each character in the ASCII character set, indicating specific properties of the characters.

`_ctype[9]` will contain the bit sets for space, blank, and control characters: `0x20 | 0x80 | 0x08`
`_ctype[32]` will contain bit sets for punctuation, space and blank characters: `0x10 | 0x20 | 0x80`
`_ctype[65]` will contain bit sets for upper and hexadecimal characters: `0x01 | 0x40`
`_ctype[94]` will contain the bit set for the punctuation character: `0x10`

(c)
The advantage of using an array to implement these macros is speed and efficiency. By representing the properties of characters as bit-fields in an array, the implementation can quickly access and check the properties of a given character using bitwise operations.  
