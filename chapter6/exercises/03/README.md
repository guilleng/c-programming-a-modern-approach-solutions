# Chapter 06 - Exercise 03

What output does the following for statement produce?

```
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);
```

---

A `for` statement has the following structure:  

```
for ( initialization; condition; update )
	loop body;
```

For the given piece of code the semantics for evaluation are:  

The for loop starts with the __initialization__ `i = 5, j = i -1`.  
The variable `i` is set to `5` and `j` is set to `4`.

The __condition__ `i > 0, j > 0` is a comma expression, which first evaluates `i > 0` and discards its result, then evaluates `j > 0`. As long as `j > 0` is non-zero, the loop will continue to execute.

The __update__ expression `i--, j = i - 1` decrements `i` by `1`, and sets `j` to `i - 1` for the next iteration.

The loop body `printf("%d ", i)` outputs the value of `i` on each iteration.

Output: `5 4 3 2 `
