# Chapter 05 - Exercise 01

The following program fragments illustrate the relational and equality operators. Show the output produced by each, assuming that `i`, `j`, and `k` are `int` variables.  

(a)
```
i = 2; j = 3;
k = i * j == 6;
printf("%d", k);
```
(b)
```
i = 5; j = 10; k = 1;
printf("%d", k > i < j);
```
(c)
```
i = 3; j = 2; k = 1;
printf("%d", i < j == j < k);
```
(d)
```
i = 3; j = 4; k = 5;
printf("%d", i % j + i < k);
```

---

(a)
Placing focus on the second statement.  
Multiplication has the highest precedence. `2` is retrieved from `i` and `3` from `j`, their product yields the value `6`.  
Evaluation continues with the relational operator. `6` is compared for equality with `6`. This yields the value `1`.  
An assignment between `k` and `1` is next. The statement evaluates to `1` and stores it as a side effect in `k`.  

Output: `1`.  

> For the next three items, the analysis is performed placing our focus on the second argument of the `printf` call.   

(b)
All operators have the same precedence, the associativity rules dictate evaluation from left-to-right.  
The comparison between `k` and `i` takes place first. `1 > 5`  will evaluate to `0`.  
Next the comparison between `1` and the retrieved value from `j`, `10` yields the value `0`.  

Output: `0`  

(c)
The relational operator `<` has higher precedence than `==`. The comparison of `i` and `j` yields the value `0`.  
Next, the comparison between `j` and `k` yields the value `1`.  
The relational operator `==` compares `0` and `1`. Making `0` the final argument to `printf`.  

Output: `0`  

(d)
The remainder operator has the highest precedence. `i % j` yields `3`.  
Next the operation `3 + i` yields as result `6`.  
Finally the comparison operator `<` is applied between `6` and the value stored in `k`, yielding `0`.  

Output: `0`
