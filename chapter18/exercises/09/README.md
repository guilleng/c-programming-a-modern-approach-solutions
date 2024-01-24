# Chapter 18 - Exercise 09

Use a series of type definitions to simplify each of the declarations in
Exercise 8.


---

(a) `char (*x[10])(int);`

Array of 10 function pointers that take an `int` argument and return a `char`.

```C
typedef char Function(int)
typedef Function *Function_Pointer;
typedef Function_Pointer Function_Pointer_Array_Of_Ten[10];
Function_Pointer_Array_Of_Ten x;
```

(b) `int (*x(int))[5];` 

Function that takes an `int` parameter and returns a pointer to an array of 5
`int`.

```C
typedef int Array_Of_Five[5];
typedef Array_Of_Five *Function_Pointer_Int(int);
Function_pointer_Int x;
```

(c) `float *(*x(void))(int);`

Function that takes no arguments and returns a pointer to a function that takes
an `int` argument and returns a pointer to `float`. 

```C
typedef float *Function(int);
typedef Function *No_Args_Function(void);
No_Args_Function x;
```

(d) `void (*x(int, void (*y)(int)))(int);`

Function that takes an `int` plus a function pointer as arguments. Its function
argument takes an `int` argument and returns nothing. `x` returns a pointer to a
function that takes an `int` parameter and returns nothing.

```C
typedef void Outer_Function(int);
typedef void *Function_Pointer_Argument(int);
typedef Outer_Function *Function_Pointer_Arg(int, Function_Pointer_Arg);
Outer_Function x;
```
