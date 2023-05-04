# Chapter 17 - Exercise 04

Suppose that the following declarations are in effect:  

```
struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
struct rectangle *p;
```

Assume that we want `p` to point to a `rectangle` structure whose upper left corner is at (10, 25) and whose lower right corner is at (20, 15). Write a series of statements that allocate such a structure and initialize it as indicated.  

---

```
p = malloc(sizeof(struct rectangle));

p->upper_left.x  = 10;
p->upper_left.y  = 25;
p->lower_right.x = 25;
p->lower_right.y = 15;
```
