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

Assuming that `s1` is at least of size 16 and `s2` is of size 8 and that both are zero initialized.  

The first statement stores the literal "computer" including its trailing null byte into `s1`.  
The second statement stores the literal "science" into `s2`.  

`strcmp` returns an integer less than than zero because `computer` is lexicographically less than `science`. The statement that follows the conditional has to be evaluated.  

The `strcat` call appends the literal "science" to the array containing "computer", overwriting its terminating null byte. `s1` stores the literal "computerscience". 

Finally, the arithmetic `strlen(s1) - 6`, indexes `s1` six places before but not including its null byte. `s1[9] = '\0'`

```
{ 'c', 'o', 'm', 'p', 'u', 't', 'e', 'r', 's', '\0', 'i', 'e', 'n', 'c', 'e', '\0' } 
s1 == "computers"
```
