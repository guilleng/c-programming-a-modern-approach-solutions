# Chapter 13 - Exercise 07

Suppose that `str` is an array of characters.  Which one of the following
statements is not equivalent to the other three?

(a) `*str = 0;`

(b) `str[0] = '\0';`

(c) `strcpy(str, "");`

(d) `strcat(str, "");`


---

(a), (b) and (c) Assign the value `null` to the zeroth index of the array whose
name is `str`.

(d) Differs.  It appends an empty string to `str` rather than assigning a null
byte to its first element.
