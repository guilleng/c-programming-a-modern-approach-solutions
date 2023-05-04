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
Is illegal because `p` is a pointer to a structure object with members `d` (a union) and `e` (an array of 5 `int`s).  The arrow operator dereferences `p` and attempts to access a member `b` of the structure which does not exists.  
The correct way to access the `b` member of the union `d`: `p->d.b = ' ';`.  

(b)
The statement is legal and assigns to the array member `e` the value `10` in index `3`.  

(c)
The statement is legal. It assigns to union `d`'s member `a` in the object structure `p` the character `'*'`.  
Note that the same statement can be made by usage of the arrow operator: `p->d.a = '*';`.  

(d)
The statement is illegal. It dereferences a non existent pointer union member `c` in `d`.  
The correct way to access the union member is by using the dot operator: `p->d.c = 20;`.  
