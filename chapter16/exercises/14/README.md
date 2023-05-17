# Chapter 16 - Exercise 14

Let `shape` be the structure tag declared in Exercise 13. Write functions that perform the following operations on a `shape` structure `s` passed as an argument:

(a) 
Compute the area of `s`.  

(b) 
Move `s` by `x` units in the _x_ direction and `y` units in the _y_ direction, returning the modified version of `s` (`x` and `y` are additional arguments to the function).  

(c) 
Scale `s` by a factor of `c` (a `double` value), returning the modified version of `s` (`c` is an additional argument to the function).


---

Assuming the following declarations are in place:  

```
#define PI        (355.0 / 113.0)
#define RECTANGLE               1
#define CIRCLE                  2

struct point { 
    int x, 
        y; 
};

struct rectangle { 
    struct point upper_left, 
                 lower_right; 
};

struct shape {
    int shape_kind;            /* RECTANGLE or CIRCLE */
    struct point center;       /* coordinates of center */
    union {
        struct {
            int height, 
                width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;
```

(a)
```
double area(struct shape s)
{
    switch (s.shape_kind)
    {
        case RECTANGLE:
            return (double) (s.u.rectangle.height * s.u.rectangle.width);
        case CIRCLE:
            return (double) (PI * s.u.circle.radius * s.u.circle.radius);
        default:
            return -1.0;
    }
}
```

(b)
```
struct shape move(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;
    return s;
}
```

(c)
```
struct shape scale(struct shape s, double c)
{
    switch (s.shape_kind)
    {
        case RECTANGLE:
            s.u.rectangle.height *= c;
            s.u.rectangle.width  *= c;
            return s;
        case CIRCLE:
            s.u.circle.radius *= c;
            return s;
        default:
            return s;
    }
}
```
