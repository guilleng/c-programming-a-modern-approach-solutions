# Chapter 04 - Exercise 10

Show the output produced by each of the following program fragments. Assume that `i` and `j` are `int` variables.

(a) 
```
i = 6;  
j = i += i;  
printf("%d %d", i, j);  
```
(b) 
```
i = 5;  
j = (i -= 2) + 1;  
printf("%d %d", i, j);  
```
(c) 
```
i = 7;  
j = 6 + (i = 2.5);  
printf("%d %d", i, j);  
```
(d) 
```
i = 2; j = 8;  
j = (i = 6) + (j = 3);  
printf("%d %d", i, j);  
```

---

(a) 
In the second line of code, the compound assignment has the highest precedence . `6` is fetched from `i` and added to itself, yielding `12`. Next, `12` is assigned to `i`.  
It follows an assignment between `j` and `i`, which retrieves `12` from `i`, evaluates to `12` and as a side effect stores this  value in `j`.  

Output: `12 12`

(b) 
The parenthesized operation is evaluated first. Being it a compound statement, it will retrieve the value `5` from `i` and subtract `2` from it yielding `3`. It follows an assignment between `i` and `3`. This evaluates to `3` and as a side effect, stores it in `i`.  
The next operation is an addition between `3` and `1`, yielding `4`.  
Finally, an assignment between `j` and `4` takes place. This expression will evaluate to `4` and as a side effect store it in `j`.  

Output: `3 4`  

(c) 
The parenthesized operation is evaluated first. Because `i` is of type `int` the value `2.5` will be converted to this type. The assignment yields the value `2` and stores it  in `i` as a side effect.  
The binary addition between `6` and `2` takes place, yielding `8`.  
Finally, an assignment between `j` and `8` evaluates to `8` and stores it in `j` as a side effect.  

Output: `2 8`  

(d) 
As parenthesized expressions are evaluated from left to right, the assignment between `i` and `6` takes place. This evaluates to `6` and stores it in `i` as a side effect.  
It follows the assignment between `j` and `3`. Which evaluates to `3` and stores it in `j` as a side effect.  
The addition of the evaluation results of the previous expressions yields `9`.  
Finally, an assignment between `j` and `9` evaluates to `9` and stores it in `j`.  

Output: `6 9`  
