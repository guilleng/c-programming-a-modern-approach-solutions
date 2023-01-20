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

(a) The first operation of the statement to be evaluated is the compound assignment. `6` is fetched from `i` and added to itself, yielding `12`. It is followed by an assignment between `i` and `12`. This operation evaluates to `12` and stores, as a side effect, its result in `i`.  
The next operation is an assignment between `j` and `i`, which will retrieve `12` from `i`, evaluate to `12` and as a side effect store the value `12` in `j`.  

Output: `12 12`

(b) The parenthesized operation will be evaluated first. Being it a compound statement, it will retireve the value `5` from `i` and substract `2` from it yielding `3`. It is followed by an assignment between `i` and `3`. This will evaluate to `3` and as a side effect, store it in `i`.  
The next operation is a binary addition between the result of the compound assignment evaluation and `1`, yielding `4`.  
Finally an assignment between `j` and `4`. This statement will evaluate to `4` and as a side effect store `4` in `j`.   

Output: `3 4`   

(c) The parenthesized operation is evaluated first. It is an assignment between `i` and `2.5`. Because `i` is of type `int` the value `2.5` will be converted to this type, yielding `2`. Next, the assignment will evaluate to `2` and store this value in `i` as a side effect.  
A binary assignment between `6` and `2` takes place. It yields `8`.  
Finally an assignment between `j` and `8`, it evaluates to `8` and stores it in `j` as a side effect.  

Output: `2 8`  

(d) Parenthesized expression are evaluated from left to right. An assignment between `i` and `6` takes place. This evaluates to `6` and stores it in `i` as a side effect.  
It follows an assignment between `j` and `3`. This evaluates to `3` and stores it in `j` as a side effect.  
The addition of the evaluation results of the previous expressions yields `9`. 
Finally, an assignment between `j` and `9` evaluates to `9` and stores it in `j`.  
Output: `6 9`  
