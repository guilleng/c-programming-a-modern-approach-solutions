# Chapter 13 - Exercise 08

What will be the value of the string `str` after the following statements have
been executed?

```C
strcpy(str, "tire-bouchon");
strcpy(&str[4], "d-or-wi");
strcat(str, "red?");
```


---

Assume that `str` is an array of 16 `char`s.
The first statement copies into it  the buffer `"tire-bouchon"`.

```
str[16] = { 't', 'i', 'r', 'e', '-', 'b', 'o', 'u', 'c', 'h', 'o', 'n', '\0', '\0', '\0', '\0' }

str == "tire-bouchon"
```

The next `strcpy` call changes the array's contents that follow up its fourth by
those in the buffer `"d-or-wi"`.

```
str[16] = { 't', 'i', 'r', 'e', 'd', '-', 'o', 'r', '-', 'w', 'i', '\0', '\0', '\0', '\0', '\0' }`
                                 |_ &4
str == "tired-orwi"
```

`strcat` appends after the first null character of `str` the contents of the buffer `"red?"`.

```
str[16] = { 't', 'i', 'r', 'e', 'd', '-', 'o', 'r', '-', 'w', 'i', 'r', 'e', 'd', '?', '\0' }
                                                                    |_ &11
str == "tired-or-wired?"
```
