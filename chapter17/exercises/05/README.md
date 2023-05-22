# Chapter 17 - Exercise 05

Suppose that `f` and `p` are declared as follows:  

```
struct {
    union {
        char a, b;
        int c;
    } d;
    int e[5];
} f *p = &f;
```

Which of the following statements are legal?  

(a)
`p->b = ' ';`  

(b) 
`p->e[3] = 10;`  

(c) 
`(*p).d.a = '*';`  

(d) 
`p->d->c = 20;`  

---

(a)
This statement is illegal because `p` is a pointer to a structure object with members `d` (a union) and `e` (an array of 5 ints). The arrow operator dereferences `p` and attempts to access a member `b` of the structure, which does not exist.  
The correct way to access the `b` member of the union `d`: `p->d.b = ' ';`.  

(b)
The statement is legal and assigns to the array member `e` the value `10` in index `3`.  

(c)
This statement is legal. It assigns the character `*` to the member `a` of the union `d` in the object structure `p` 
Note that the same statement can be made by usage of the arrow operator: `p->d.a = '*';`.  

(d)
The statement is illegal. It dereferences a non existent pointer member `c` in the union `d`.  
The correct way to access the union member is by using the dot operator: `p->d.c = 20;`.  
