# Chapter 16 - Exercise 10

The following structures are designed to store information about objects on a
graphics screen:

```C
struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
```

A `point` structure stores the _x_ and _y_ coordinates of a point on the screen.
A `rectangle` structure stores the coordinates of the upper left and lower right
corners of a rectangle.  Write functions that perform the following operations
on a `rectangle` structure `r` passed as an argument:

(a) Compute the area of r.

(b) Compute the center of `r`, returning it as a point value.  If either the _x_
or _y_ coordinate of the center isn't an integer, store its truncated value in
the `point` structure.

(c) Move `r` by `x` units in the _x_ direction and `y` units in the _y_
direction, returning the modified version of `r` (`x` and `y` are additional
arguments to the function). 

(d) Determine whether a point `p` lies within `r`, returning `true` or `false`
(`p` is an addition argument of type `struct point`). 


---

(a)
```C
int area(struct rectangle r)
{
    return (r.lower_right.x - r.upper_left.x) * 
            (r.lower_right.y - r.upper_left.y);
}
```

(b)
```C
struct point center(struct rectangle r)
{
    struct point new = { 
        (r.lower_right.x - r.upper_left.x) / 2,
        (r.lower_right.y - r.upper_left.y) / 2 };

    return new;
}
```

(c)
```C
/* Assumes that r is moved to a valid screen position */
struct rectangle move(struct rectangle r, int x, int y)
{
    r.upper_left.x  += x;
    r.upper_left.y  += y;
    r.lower_right.x += x;
    r.lower_right.y += y;

    return r;
}
```

(d)
```C
int lies_within(struct rectangle r, struct point p)
{
    return (p.x >= r.upper_left.x && p.x <= r.lower_right.x &&
            p.y >= r.upper_left.y && p.y <= r.lower_right.y);
}
```
