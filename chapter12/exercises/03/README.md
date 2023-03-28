# Chapter 12 - Exercise 03
 
What will be the contents of the `a` array after the following statements are executed?

```
#define N 10

int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int *p = &a[0], *q = &a[N-1], temp;

while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
}
```

---

The first four lines contain declarations for a `10` element array, a temporary variable and two pointers pointing to the first and last elements of the array respectively.  

The `while` loop condition states that the body loop is executed as long as the address of pointer `p` is less than the address of pointer `q`.  
The body loop performs the following computations:  

1. Stores in `temp` the value referred by `p`.  
2. Assigns the value `q` points to to the element `p` points in the array `a`. Then the unary `++` operator increments by 1 the element `p` points to.  
2. Assigns the value `p` was pointing to to the element `q` points in the array `a`. Then the unary `--` operator decrements by 1 the element `q` points to.  

In short, the loop 'swaps' the elements of the array `a`.  

Contents of `a` after the statements are executed: `{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }`
