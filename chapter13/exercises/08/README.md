# Chapter 13 - Exercise 08

What will be the value of the string `str` after the following statements have been executed?

```
strcpy(str, "tire-bouchon");
strcpy(&str[4], "d-or-wi");
strcat(str, "red?");
```

---

The first statement copies into the string `str`, the buffer `"tire-bouchon"`.  

```
str[16] = { 't', 'i', 'r', 'e', '-', 'b', 'o', 'u', 'c', 'h', 'o', 'n', '\0', '\0', '\0', '\0' }

str == "tire-bouchon"
```

The following statement has the effect of changing the contents of the items greater than or equal than the fourth address in the array `str` by those in the buffer `"d-or-wi"`.  

```
str[16] = { 't', 'i', 'r', 'e', 'd', '-', 'o', 'r', '-', 'w', 'i', '\0', '\0', '\0', '\0', '\0' }`
                                 |_ &4
str == "tired-orwi"
```

`strcat` appends after the first null character of `str` (`&str[11]`) the contents of the buffer `"red?"`.

```
str[16] = { 't', 'i', 'r', 'e', 'd', '-', 'o', 'r', '-', 'w', 'i', 'r', 'e', 'd', '?', '\0' }
                                                                    |_ &11
str == "tired-or-wired?"
```
