# Chapter 16 - Exercise 13

Suppose that `s` is the following structure (`point` is a structure tag declared in Exercise 10):

```
struct shape {
    int shape_kind;            /* RECTANGLE or CIRCLE */
    struct point center;       /* coordinates of center */
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;
```

If the value of `shape_kind` is `RECTANGLE`, the `height` and `width` members store the dimensions of a rectangle. If the value of `shape_kind` is `CIRCLE`, the `radium` member stores the radius of a circle. Indicate which of the following statements are legal, and show how to repair the ones that aren't:  

(a) `s.shape_kind = RECTANGLE;`  

(b) `s.center.x = 10;`  

(c) `s.height = 25;`  

(d) `s.u.rectangle.width = 8;`  

(e) `s.u.circle = 5;`  

(f) `s.u.radius = 5;`  

---

(a)
The statement is legal. It assigns the value `RECTANGLE` to the member `shape_kind` of `s`.  

(b)
The statement is legal. It assign to the `x` member of the `point` structure member of `s` the integer value 10.  

(c)
Not legal, there is no `height` member for `s`. To amend this statement and assign 25 to the `rectangle`'s height it should be:  

```
s.u.rectangle.height = 25;
```

(d)
The statement is legal.  

(e)
Not legal, it attempts to assign an `int` to the `circle` structure member of the union `u` from `s`, missing a reference to the `radius` member.  

```
s.u.circle.radius = 5;
```

(f)
Not legal, there is no member `radius` in the union `u`.    

```
s.u.circle.radius = 5;
```
