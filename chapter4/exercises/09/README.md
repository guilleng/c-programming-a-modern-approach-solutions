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

Applying the precedence and association rules for evaluation of statements, allows the inference of the outputs of the program fragments:  

(a) 
The first line of statements perform assignations.  
After retrieving `8` from `j`, its addition with `1` gets evaluated, yielding `9`.  
The compound multiplicative statement stores in `i` the result of multiplying `7` with `9`.  

Output: `63 8`.  

(b) 
The first statement results in storing the value `1` in `i`, `j` and `k`. 
Next, the value `1` is retrieved from `k` and `j`. After the addition an assignment `j = 2` follows.   
For the compound assignment `i += j` `1` is retrieved from `i` and `2` from `j`. After their addition and assignment `i = 3` will evaluate to `3` storing this value as a side effect in `i`.  

Output: `3 2 1`.

(c) 
The first line of statements perform assignations.  
Association rule is from right to left, the compound assignment subtracts `2` and `3`, yielding `-1`. Then an assignment `j = -1` takes place. This evaluates to `-1` and stores it in `j` as a side effect.  
The compound subtraction `i -= j` yields `2`, and stores this value in `i`.  

Output: `2 -1 3` 

(d) 
The first line of statements perform assignations.  
`j *= k` will retrieve `0` from `k` and `1` from `j`. The multiplication of `1` and `0` yields `0`. Then an assignment `j = 0` takes place storing `0` in `j`.  
The compound multiplication `i *= j` also yields `0`, and then stores it in `i`.  

Output: `0 0 0`
