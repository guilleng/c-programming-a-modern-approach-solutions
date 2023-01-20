# Chapter 04 - Exercise 11

Show the output produced by each of the following program fragments. Assume that `i`, `j`, and `k` are `int` variables.

(a) 
```
i = 1;  
printf("%d ", i++ - 1);  
printf("%d", i);  
```
(b) 
```
i = 10; j = 5;  
printf("%d ", i++ - ++j);  
printf("%d %d", i, j);  
```
(c) 
```
i = 7; j = 8;  
printf("%d ", i++ - --j);  
printf("%d %d", i, j);  
```
(d) 
```
i = 3; j = 4; k = 5;  
printf("%d ", i++ - j++ + --k);  
printf("%d %d %d", i, j, k);  
```

---

We should focus on the second argument of the first `printf` call first.  

(a) The postfix operator has the highest precedence. Its evaluation will just retrieve `1` from `i` until the next statement is executed.  
The substraction operation follows. It will take place between the values `1` and `1` yielding `0`.  
The first `printf` call outputs the value `0` and once this is done, it is safe to assume that `i` stores the value of the postfix incrementation operation, `2`.     
The second `printf` call executes and outputs the retrieved value from `i`.  

Output : `0 2` 

(b) The postfix increment has the highest precedence. It will retireve `10` from `i`.  
The prefix increment is next. Its evaluation will immeadiately increment the retrieved value `5` from `j`, storing it in it and evaluating to `6` simultaneously.   
The substraction between `10` and `6` will take place, being this the output of the `printf` call.  
We can assume now that `i` stores `11`.    

Output: `4 11 6`  

(c) The argument of the first `printf` call will be the difference between the retrieved value from `i` and the decrementation by one unit of the value stored in `j`. This is, `7 - 7` which is `0`.  
After the function call is executed we are safe to assume that `i` stores its incremented value `8`.  
Output: `0 8 7`  

(d) The utmost left postfix incrementation has the highest precedence. Its evaluation will be the retrieved value from `i` which is `3`.  
Then the postfix incrementation of `j`. `4` is retrieved from it.  
Now the prefix decrementation of `k` will evaluate to `4` immediately storing it in `k`. 
The evluation of `3 - 4 + 4` will be the argument for the first `printf` call. 
After the call returns we can assume that `i = 4` and `j = 5`.  

Output: `3 4 5 4`
