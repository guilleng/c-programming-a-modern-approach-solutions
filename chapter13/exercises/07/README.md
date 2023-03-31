# Chapter 13 - Exercise 07

Suppose that `str` is an array of characters. Which one of the following statements is not equivalent to the other three?

(a) `*str = 0;`  
(b) `str[0] = '\0';`  
(c) `strcpy(str, "");`  
(d) `strcat(str, "");`  

---

(a), (b) and (c) Assign the value `null` to the zeroth index of the array whose name is `str`.  

(d) 
Is not equal because it appends `""` to `str`, overwriting the terminating null byte `'\0'` at the end of `str` and then adds a terminating null byte. In case `sizeof(str)` is `1` and it is already null terminated, the behavior of this call is undefined.
