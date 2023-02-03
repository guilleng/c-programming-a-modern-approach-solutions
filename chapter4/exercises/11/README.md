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

The key is to focus on the second argument of the first `printf` call.  

(a) 
The postfix operator has the highest precedence. Its evaluation will retrieve `1` from `i` until the next statement is executed. The subtraction between the values `1` and `1` yields `0`. 
The first `printf` call outputs the value `0` and once this is done, it is safe to assume that `i` stores the value `2`.     
The second `printf` call executes and outputs the updated `i` value.  

Output : `0 2` 

(b) 
The postfix increment has the highest precedence. It retrieves `10` from `i`.  
The prefix increment is next. Its evaluation will immediately increment the value `5`, evaluating to `6` and simultaneously storing it in `j`.  
The subtraction between `10` and `6` takes place, and this the output of the first `printf` call.  
It is safe to assume that `i` stores `11`.  

Output: `4 11 6`  

(c) 
The argument of the first `printf` call will be the difference between the retrieved value from `i` and the incrementation by one unit of the value stored in `j`. This is, `7 - 7` which is `0`.  
Once the function returns it is safe to assume that `i` stores its incremented value `8`.  
Output: `0 8 7`  

(d) 
The utmost left postfix incrementation has the highest precedence. Its evaluation is the retrieved value from `i`, `3`.  
Then for the postfix incrementation of `j`. `4` is retrieved from it.  
Now the prefix decrement of `k` evaluates to `4` and immediately updates `k`. 
The evaluation of `3 - 4 + 4` is the argument for the first `printf` call. 
After the call returns we can assume that `i = 4` and `j = 5`.  

Output: `3 4 5 4`
