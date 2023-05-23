# Chapter 21 - Exercise 02

Having located the header files on your system (see Exercise 1), find a standard header in which a macro hides a function.

---

`/usr/include/ctype.h` Defines an inline function for implementing `tolower`:  

```
__extern_inline int
__NTH (tolower (int __c))
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}
```

And a couple of lines below it is defined as a macro, as an optimized version:  


```
#  define tolower(c)	__tobody (c, tolower, *__ctype_tolower_loc (), (c))
```
