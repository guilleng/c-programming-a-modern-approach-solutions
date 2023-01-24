# Chapter 04 - Exercise 09

Show the output produced by each of the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.  

(a) 
```
i = 7; j = 8;
i *= j + 1;   
printf("%d %d", i, j);
```
(b) 
```
i = j = k = 1;  
i += j += k;  
printf("%d %d %d", i, j, k);  
```
(c) 
```
i = 1; j = 2; k = 3;  
i -= j -= k;  
printf("%d %d %d", i, j, k);
```
(d) 
```
i = 2; j = 1; k = 0;  
i *= j *= k;  
printf("%d %d %d", i, j, k);  
```

---

We will apply the precedence and association rules for evaluation of statements.  

(a) 
After retrieving `8` from `j`, its addition with `1` gets evaluated, yielding `9`.   
The compound multiplicative statement retrieves `7` from `i`, and multiply it with `9`. The result of the computation is stored in `i`.  

Output: `63 8`.  

(b) 
We associate right to left, evaluating `j += k`.  
`1` is retrieved from `k` and `1` from `j`. Then we add them yielding `2`. An assignment `j = 2` follows, storing `2` in j.   
For the compound assignment `i += j` `1` is retrieved from `i` and `2` from `j`. They are added yielding `3`. We are left with an assignment `i = 3` that will evaluate to `3` and store this value as a side effect in `i`.

Output: `3 2 1`.

(c) 
We associate right to left, evaluating `j -= k`.  
The compound assignment retrieves `3` from `k` and `2` from `j`. The procedure continues performing the substraction of `2` and `3`, yielding `-1`. Then an assignment `j = -1` takes place. This evaluates to `-1` and stores it in `j` as a side effect.  
The coumpound substraction `i -= j` retrieves `-1` from `j` and `1` from `i`. It substracts `-1` from `1` yielding `2`, and then stores this value in `i`.  

Output: `2 -1 3` 

(d) 
`j *= k` will retrieve `0` from `k` and `1` from `j`. The multiplication of `1` and `0` yields `0`. Then an assignment `j = 0` takes place storing `0` in `j`.  
The coumpound multiplication `i *= j` also yields `0`, and then stores it in `i`.  

Output: `0 0 0`
