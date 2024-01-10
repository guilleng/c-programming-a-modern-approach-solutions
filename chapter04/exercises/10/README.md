# Chapter 04 - Exercise 10

Show the output produced by each of the following program fragments. Assume that
`i` and `j` are `int` variables.

(a) 
```C
i = 6;  
j = i += i;  
printf("%d %d", i, j);  
```

(b) 
```C
i = 5;  
j = (i -= 2) + 1;  
printf("%d %d", i, j);  
```

(c) 
```C
i = 7;  
j = 6 + (i = 2.5);  
printf("%d %d", i, j);  
```

(d) 
```C
i = 2; j = 8;  
j = (i = 6) + (j = 3);  
printf("%d %d", i, j);  
```

---

(a) 
In the second line of code, the compound assignment has the highest precedence .
`6` is fetched from `i` and added to itself, yielding `12`.  Next, `12` is
assigned to `i`.  
It follows an assignment between `j` and `i`, which retrieves `12` from `i`,
evaluates to `12` and as a side effect stores this  value in `j`.  

Output: `12 12`

(b) 
The parenthesized operation is evaluated first. Being it a compound statement,
it will retrieve the value `5` from `i` and subtract `2` from it yielding `3`. 
Immediately, `i` is assigned this value. 
The assignment evaluates to `3` and its addition with `1`, yields `4`.  
Finally, an assignment between `j` and `4` takes place. 

Output: `3 4`  

(c) 
The parenthesized operation is evaluated first.  Because `i` is of type `int`
the value `2.5` is converted to this type.  The assignment operation yields the
value `2` and stores it  in `i` as a side effect.  
The addition between `6` and `2` yields `8`.  
The assignment between `j` and `8` takes place.  

Output: `2 8`  

(d) 
The assignment between `i` and `6` takes place. This evaluates to `6` and stores
it in `i` as a side effect.  
It follows the assignment between `j` and `3`. Which evaluates to `3` and stores
it in `j` as a side effect.  
The addition of the evaluation results of the previous expressions yields `9`.  
The assignment between `j` and `9` evaluates to `9` and stores it in `j`.  

Output: `6 9`  
