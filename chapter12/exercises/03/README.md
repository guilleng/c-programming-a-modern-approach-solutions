# Chapter 12 - Exercise 03
 
What will be the contents of the `a` array after the following statements are
executed?

```C
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

The first four lines contain declarations for a 10 element array, a temporary
variable and two pointers pointing to the first and last elements of the array
respectively. 

The `while` loop condition states that the body loop is executed as long as the
address of pointer `p` is less than the address of pointer `q`. 
The body loop performs the following computations:

1. Stores in `temp` the value `p` refers to.

2. Assigns the value `q` points to, to the element `p` points in `a`.  Then the
unary `++` indexes `p` to the next element.

3. Assigns the value `p` was pointing to, to the location `q` points in `a`.
Then the unary `--` moves `q` to a lower indexed element.

In short, the loop 'swaps' the elements of the array `a`.

Contents of `a` after the statements are executed: `{ 10, 9, 8, 7, 6, 5, 4, 3,
2, 1 }`
