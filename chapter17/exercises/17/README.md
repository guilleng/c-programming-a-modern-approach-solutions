# Chapter 17 - Exercise 17

Let `a` be an array of 100 integers. Write a call of `qsort` that sorts only the last 50 elements in a. (You don’t need to write the comparison function).  

---

Assuming the comparison function is `compare`:  

```
qsort(a + 50, 50, sizeof(*a), compare);
```
