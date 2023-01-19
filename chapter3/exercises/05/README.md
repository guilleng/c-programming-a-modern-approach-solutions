# Chapter 03 - Exercise 05

Suppose that we call `scanf` as follows:  
```
scanf("%f%d%f", &x, &i, &y);
```
If the user enters:  
```
12.2 45.6 789
```
What will be the values of `i`, `x` and `y` after the call? (Assume that `x` and `y` are `float` variables and `i` is an `int` variable) 

---

`scanf` will process the directive `%f`. The value `12.2` matches the directive. `12.2` is assigned to `x`.  
Next it will process the directive `%d`. The blank space is discarded, the value `45` matches the directive. It will assign `45` to `i`.   
Finally the last directive `%f` is processed. The value `.6` matches the directive. `0.6` is assigned to `y`.  
The call then returns, and the variables have the values:  
```
i = 45
x = 12.2
y = 0.6
```