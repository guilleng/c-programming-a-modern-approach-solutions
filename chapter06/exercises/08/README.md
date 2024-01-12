# Chapter 06 - Exercise 08

What output does the following `for` statement produce?

```C
for (i = 10; i >= 1; i /= 2)
    prinf("%d ", i++);
```


---

The for loop starts setting `i` to `10`.

The condition `i >= 1` is evaluated before each iteration of the loop. If it
evaluates to a non-zero value, the loop body is executed.

The update expression `i /= 2` is evaluated after the loop body, it divides the
value of `i` by `2` in each iteration.

The loop body contains a single call to `printf` that outputs the current value
of `i` and increments it afterwards.

Once `i` is assigned `1` the loop's condition will always evaluate to `1`. The
second argument of the `printf` call is the cause of the behavior.

> Condition: `1 >= 1` evaluates to `1`. 
> Body loop: Output the string `1` and afterwards assign `2` to `i`.
> Update: `2 /= 2` evaluates to `1`.
> Condition: `1 >= 1` evaluates to `1.
> ....

Output: `10 5 3 2 1 1 ...`
