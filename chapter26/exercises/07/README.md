# Chapter 26 - Exercise 07

Explain the meaning of the following statement, assuming that `value` is a variable of type `long int` and `p` is a variable of type`char *`: 

```
value = strtol(p, &p, 10);
```

---

The argument `p` points to the input string that needs to be converted.  
`&p` is a pointer to a pointer to `char`. It is used to store the position in the string where the conversion stopped.  
The final argument specifies the base of the number system being used.  

This statement assigns the converted value to `value` updating the pointer `p` to the position where the conversion stopped. Assuming that the string is is null-terminated, `p` will point to `'\0'` if the string were consumed fully or to other character otherwise.  
