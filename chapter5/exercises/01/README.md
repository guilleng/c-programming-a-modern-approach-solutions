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
We focus on the second statement. 
Multiplication has the highest precedence. `2` is retrieved from `i` and `3` from `j`, their product yields the value `6`.  
Evaluation continues with the relational operator. `6` is compared for equality with `6`. This yiels the value `1`.  
An assignment between `k` and `1` is next. The statement evaluates to `1` and stores it as a side effect in `k`.  

The `printf` call will output: `1`.  

> For the next three problems, we place our focus on the second argument of the printf function.  

(b)
The argument is composed of operators having all the same precedence, we should follow the associativity rules for evaluating the expression. Which is left-to-right.
The comparison between `k` and `i` takes place first. `1 > 5`  will evaluate to `0`.  
The next operation is a comparison between `1` and the retrieved value from `j`, `10`. The operation `1 < 0` yields the value `0`.  

Output: `0`  

(c)
The relational operator `<` has lower precedence than the relational operator `==`. The comparison of `i` and `j` is done, which yields the value `0` because `i` is `3` and `j` is `2`.  
Then, the comparison between `j` and `k` is done, which yields the value of `1` because `j` is `2` and `k` is `1`.  
The relational operator == compares `0` and `1`. This yields a value of `0`, which is the final argument to `printf`.  

Output: `0`  

(d)
The remainder operator has the highest precedence. The operation `i % j` will be done first, yielding the result `3`. Then, the operation `3 + i` is done, yielding the result `6`.
Next the comparison operator `<` is applied to the result of the previous operation and the value of `k`, which yields the value `0` because `6` is not less than `5`.  

Output: `0`
