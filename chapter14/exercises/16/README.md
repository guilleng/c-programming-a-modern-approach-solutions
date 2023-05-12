# Chapter 14 - Exercise 16

(C99) Assume that the following macro definitions are in effect:

```
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)
```

What will the following line look like after macro expansion?

```
IDENT(foo)
```
---

`IDENT(foo)` is replaced with the macro's definition: `PRAGMA(ident "foo")`.  
`PRAGMA(ident "foo")`'s expansion is:  

```
_Pragma("ident \"foo\"")
```

Which finally expands by the `_Pragma` directive to:  

```
#pragma ident "foo"
```
