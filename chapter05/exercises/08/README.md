# Chapter 05 - Exercise 08

The following `if` statement is unnecessarily complicated. Simplify it as much as possible. (__Hint__: The entire statement can be replaced by a single assignment.)

```
if (age >= 13)
    if (age <= 19)
        teenager = true;
    else
        teenager = false;
else if (age < 13)
    teenager = false;
```

---

Solution:  

`teenager = ( age >= 13 && age <=19 );`

Another possible solution using the ternary operator:  

`teenager =  age >= 13 ? age <= 19 : 0;`
