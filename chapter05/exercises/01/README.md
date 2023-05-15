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
Focusing on the second statement, multiplication has the highest precedence. `2` is retrieved from `i` and `3` from `j`, their product yields `6`.  
Evaluation continues with the relational operator. `6` is compared for equality with `6`, producing `1`.  
The assignment operator goes last. The statement evaluates to `1` storing it as a side effect in `k`.  

Output: `1`.  

> For the next three items, the analysis is performed focusing on the second argument of the `printf` call.   

(b)
All operators have the same precedence, the rules dictate associativity from left-to-right.  
The comparison between `k` and `i` takes place first. `1 > 5`  will evaluate to `0`.  
The comparison between `0` and the retrieved value from `j` yields the value `1`, because `0 < 10`.

Output: `1`  

(c)
The relational operator `<` has higher precedence than `==`. 
The comparison `3 < 2` yields `0`.  
The relational operation `2 < 1` also produces `0`.  
The relational operator `==` compares `0` and `0`, `1` is the final argument to `printf`.  

Output: `1`  

(d)
The remainder operator has the highest precedence. `3 % 4` yields `3`.  
The operation `3 + i` produces `6`.  
The comparison operator `<` is applied between `6` and the value stored in `k`, `6 < 5` produces `0`.  

Output: `0`
