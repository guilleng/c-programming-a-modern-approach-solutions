# Chapter 06 - Exercise 13

Rewrite the following loop so that its body is empty:  

```
for (n = 0; m > 0; n++)
    m /=2;
```

---

Moving the loop body to the update expression, making use of the comma operator. A `Null` statement goes in place of the now absent loop body.  

```
for (n = 0; m > 0; n++, m /= 2)
    ;
```
