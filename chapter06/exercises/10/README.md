# Chapter 06 - Exercise 10

Show how to replace a `continue` statement by an equivalent `goto` statement.

---

The semantics of a `continue` statement is that when executed, program control is transferred to the update expression of a `for` statement or out and before of the innermost enclosing `while` or `do` statement.

In order to declare a `goto` statement, an `identifier` followed by a statement should be introduced first. The semantics for a `goto` is that when executed, program control is transferred to the statement following the label identifier.  

`while` loop using a `continue` statement:  

```
int i = 0;
while (1)
{
    if (i == 10) 
        break;
    printf("%d ", i++);
    continue;
    printf("Never executed printf call");
}
```

Equivalent loop using an `identifier` followed by a `Null` statement:  

```
int i = 0;
label : ;
while (1)
{
    if (i == 10) 
        break;
    printf("%d ", i++);
    goto label;
    printf("Never executed printf call");
}
```
