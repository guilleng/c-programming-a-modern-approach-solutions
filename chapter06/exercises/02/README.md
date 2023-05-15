# Chapter 06 - Exercise 02

What output does the following program fragment produce?

```
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```

---

A `do ... while` statement has the following structure:  

```
do {
    loop body;
} while ( condition );
```

For the given piece of code the semantics for evaluation are:  

The first statement assigns the value `9384` to `i`.

The __loop body__ has two statements. The `printf` call outputs the current value of `i`. The compound division makes the value of `i` an order of magnitude smaller.  

The __condition__ is `i > 0` and as long as this evaluates to a non-zero value, the loop body will reiterate evaluation.  

Output: `9384 938 93 9 `
