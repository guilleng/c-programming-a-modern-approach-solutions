# Chapter 12 - Exercise 01

Suppose that the following declarations are in effect:  

```
int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
int *p = &a[1], *q = &a[5];
```

(a) What is the value of `*(p+3)`?  
(b) What is the value of `*(q-3)`?  
(c) What is the value of `q - p`?  
(d) Is the condition `p < q` true or false?  
(e) Is the condition `*p < *q` true or false?  

---

After the statement declarations are evaluated:  
`a` is an integer array of size `8`.  
`p` and `q` are pointers to integer. 
`p` is initialized to the address that points to the element `1` of `a` and `q` to element `5`.  

(a)
`*(p + 3)` 
The address that `p` points to is added `3` elements, `(1 + 3)` yields a reference to element number `4`. The dereference operator evaluates to the `int` value that `p` points to `14`.  

(b)
`*(q - 3)`
The address that `q` points to is subtracted `3` elements, `(5 - 3)` yields a reference to element number `2`. The dereference operator evaluates to the `int` value that `q` points to `34`.  

(c)
`q - p`
Yields the distance (as type `ptrdiff_t` which is a signed integral type defined at `<stdef.h>`) between the pointers `q` and `p`, that is `5 - 1 = 4`.  

(d)
`p < q`
Yields `true`. `p` points to an element that is in a lower memory location than `q`.  

(e)
`*p < *q`
Yields `false`. The dereference operator `*` has higher precedence than the relational `<`, the condition to evaluate is between the values that `p` and `q` point to `15` and `14` respectively.  
