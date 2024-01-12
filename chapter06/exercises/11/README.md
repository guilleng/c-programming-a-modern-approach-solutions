# Chapter 06 - Exercise 11

What does the output of the following program fragment produce?

```C
sum = 0;
for (i = 0; i < 10; i++) {
    if (i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum);
```


---

The loop runs 10 times.  For loop body evaluations where `i` is set to an even
value, its value is added with `sum` and stored into `sum`.  For iterations in
which `i` is odd, the `continue` statement gets evaluated and program control
jumps to the update expression of the `loop`, leaving `sum` unchanged.

Output: `20`
