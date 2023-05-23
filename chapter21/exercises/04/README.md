# Chapter 21 - Exercise 04

Make a list of all reserved identifiers in the “future library directions” section of the C99 standard. Distinguish between identifiers that are reserved for use only when a specific header is included versus identifiers that are reserved for use as external names.

---

Section 7.26 of "ISO/IEC 9899:1999 Programming languages — C". All external names described below are reserved no matter what headers are included by the program.  

+ `complex.h`

Function names  
`cerf` `cerfc` `cexp2`   
`cexpm1` `clog10` `clog1p`  
`clog2` `clgamma` `ctgamma`   

and the same names suffixed with `f` or `l`.  

+ `ctype.h`  

Function names that begin with wither `is` or `to` and a lowercase letter.  

+ `errno.h`  

Macros that begin with `E` and a digit or `E` and an uppercase letter.  

+ `inttypes.h`  

Macro names beginning with `PRI` or `SCN` followed by any lowercase letter or `X`.  

+ `locale.h`  

Macros that begin with `LC_` and an uppercase letter.   

+ `signal.h`  

Macros that begin with either `SIG` and an uppercase letter or `SIG_` and an uppercase letter.   

+ `stdbool.h`  

The ability to undefine and perhaps then redefine the macros `bool`, `true`, and `false` is an obsolescent feature.

+ `stdint.h`  

Typedef names beginning with `int` or `uint` and ending with `_t`. 
Macro names beginning with `INT` or `UINT` and ending with `_MAX`, `_MIN`, or `_C`.

+ `stdio.h`  

Lowercase letters may be added to the conversion specifiers and length modifiers in `fprintf` and `fscanf`. Other characters may be used in extensions. The use of `ungetc` on a binary stream where the file position indicator is zero prior to the call is an obsolescent feature.  

+ `stdlib.h`  

Function names that begin with `str` and a lowercase letter.   

+ `string.h`  

Function names that begin with `str`, `mem`, or `wcs` and a lowercase letter.  

+ `wchar.h`  

Function names that begin with `wcs` and a lowercase letter.  
Lowercase letters may be added to the conversion specifiers and length modifiers in `fwprintf` and `fwscanf`. Other characters may be used in extensions.  

+ `wctype.h`  

Function names that begin with `is` or `to` and a lowercase letter.   
