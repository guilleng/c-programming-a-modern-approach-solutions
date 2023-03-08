# Chapter 09 - Exercise 01

The following function, which computes the area of a triangle, contains two errors. Locate the errors and show how to fix them. (Hint: There are no errors in the formula.)

```
double triangle_area(double base, height)
double product;
{
    product = base * height;
    return product / 2;
}
```

---

The parameter `height` lacks a type definition. A type should be specified for each function parameter.  
The local variable declaration `product` is outside the function body. All variable declarations belonging to a function should be within its body, which is delimited by the curly braces.  

Corrected code:  

```
double triangle_area(double base, double height)
{
    double product;
    product = base * height;
    return product / 2;
}
```

