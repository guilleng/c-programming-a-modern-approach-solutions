# Chapter 06 - Exercise 13

Rewrite the following loop so that its body is empty:

```C
for (n = 0; m > 0; n++)
    m /=2;
```


---

Move the loop body to the update expression, making use of the comma operator.

```
for (n = 0; m > 0; n++, m /= 2)
    ;
```
