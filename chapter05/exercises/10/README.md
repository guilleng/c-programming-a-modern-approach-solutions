# Chapter 05 - Exercise 10

What does the output of the following program produce? (Assume that `i` is an
integer variable.)

```C
i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}
```


---

The controlling expression of  the `switch` statement `1 % 3` evaluates to `1`. 
The first `case` is skipped, but the second matches. Given the lack of a `break`
statement, execution "falls through" and as result the program outputs:
`onetwo`.
