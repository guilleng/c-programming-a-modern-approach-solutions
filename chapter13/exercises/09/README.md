# Chapter 13 - Exercise 09

What will be the value of the string `s1` after the following statements have been executed?

```
strcpy(s1, "computer");
strcpy(s2, "science");
if (strcmp(s1, s2) < 0)
    strcat(s1, s2);
else
    strcat(s2, s1);
s1[strlen(s1)-6] = '\0';
```

---

The first statement stores the literal "computer" including its trailing null byte into `s1`.  
The second statement stores the string "science" including its trailing null byte into `s2`.  

The `strcmp` call returns an integer less than zero because "computer" is lexicographically less than "science". Therefore, the code executes the `strcat(s1, s2)` statement, which appends the string "science" to the end of `s1`, overwriting its terminating null byte. `s1` now stores the string "computerscience".  

Finally, the expression `strlen(s1) - 6` evaluates to 9, the assignment `s1[10] = '\0'` sets the character at that position to null. After executing the given code, the value of `s1` is "computers".  

```
{ 'c', 'o', 'm', 'p', 'u', 't', 'e', 'r', 's', '\0', 'i', 'e', 'n', 'c', 'e', '\0' } 
s1 == "computers"
```
