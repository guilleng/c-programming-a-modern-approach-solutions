# Chapter 14 - Exercise 07

Let `GENERIC_MAX` be the following macro:  

```
#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}
```

(a) 
Show the preprocessor's expansion of `GENERIC_MAX(long)`.  

(b) 
Explain why `GENERIC_MAX` doesn't work for basic types such as `unsigned long`.  

(c) 
Describe a technique that would allow us to use `GENERIC_MAX` with basic types such as unsigned long. _Hint_: Don't change the definition of `GENERIC_MAX`.  

---

(a)

```
long long_max(long x, long y)
{
    return x > y ? x : y;
}
```

(b)
The type includes a space character in its name, therefore the expansion of `GENERIC_MAX(unsigned long)` is:  

```
unsigned long unsigned long_max(unsigned long x, unsigned long y)
{
    return x > y ? x : y;
}
```

This is an illegal function definition. It contains two consecutive type definitions for its return value.  

(c)

Defining a new type such as: `typedef unsigned long ulong_nospaces;`  

The expansion for `GENERIC_MAX(ulong_nospaces)` is:  

```
ulong_nospaces ulong_nospaces_max(ulong_nospaces_max x, ulong_nospaces_max y)
{
    return x > y ? x : y;
}
```
