# Chapter 06 - Exercise 01

What output does the following program fragment produce?

```C
i = 1;
while (i <= 128) {
    printf("%d ", i);
    i *=2;
}
```

---

A `while` statement has the following structure:

```C
while ( condition )
	loop body;
```

For the given piece of code, evaluation proceeds as follows:

The first statement assigns the value `1` to `i`.

The __condition__ is `i <= 128`.  As long as it evaluates to a non-zero value,
the loop body will continue to evaluate.

The __loop body__ consists of two statements.  The `printf` call outputs the
current value of `i`, and the compound product doubles it in each loop
iteration.

Output: `1 2 4 8 16 32 64 128 `
