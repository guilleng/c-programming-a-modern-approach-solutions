# Chapter 17 - Exercise 18

Modify the `compare_parts` function so that parts are sorted with their numbers in descending order.  

---

```
int compare_parts(const void *p, const void *q)
{
    return ((struct part *) q)->number - ((struct part *) p)->number;
}
```
