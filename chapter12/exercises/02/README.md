# Chapter 12 - Exercise 02

Suppose that `high`, `low` and `middle` are all pointer variables of the same
type, and that `low` and `high` point to elements of an array.  Why is the
following statement illegal, and how could it be fixed?

```C
middle = (low + high) / 2;
```


---

The addition of the pointers is a type error that the compiler should detect.  A
program containing such a statement can't be compiled.

Assuming that `middle` should point to a value that is 'half the way' between
`low` and `high`:

```C
middle = ((high - low) / 2) + low;
```
