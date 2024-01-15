# Chapter 09 - Exercise 08

Which of the following would be valid prototypes for a function that returns
nothing and has one double parameter?

(a) `void f(double x);`

(b) `void f(double);`

(c) `void f(x);`

(d) `f(double x);`


---

(a)
Is a valid prototype specifying a full description with return-type `void`,
function name `f` and one parameter `x` of type `double`.

(b)
Is a valid prototype specifying return-type `void`, function name `f` and one
parameter of type `double` whose name is omitted.

(c)
Is not a valid prototype.  It lacks a parameter type which can't be omitted. 

(d)
Not a valid prototype.  Were this code compiled, the function would have a
default return-type `int`, function name `f` and one parameter `x` of type
`double`.
