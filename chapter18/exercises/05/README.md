# Chapter 18 - Exercise 05

State whether each of the following statements is true or false. Justify each answer.

(a) 
Every variable with static storage duration has file scope.  

(b) 
Every variable declared inside a function has no linkage.  

(c) 
Every variable with internal linkage has static storage duration.  

(d) 
Every parameter has block scope.  

---


(a)
False. Variables in C have lexical scope.  

(b)
False. A function may declare a name reference whose data may be provided at link time.  

(c)
True. Their location in memory is fixed for the duration of the execution environment.  

(d)
True. Function parameters are in scope for the runtime of the function call.  
