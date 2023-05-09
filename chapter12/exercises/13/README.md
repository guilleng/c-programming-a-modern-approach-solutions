# Chapter 12 - Exercise 13

Section 8.2 had a program fragment in which two nested `for` loops initialized the array `ident` for use as an identity matrix. Rewrite this code, using a single pointer to step through the array one element at a time. _Hint_: Since we won't be using `row` and `col` index variables, it won't be easy to tell where to store 1. Instead, we can use the fact that the first element of the array should be 1, the next `N` elements should be 0, the next element should be 1 and so forth. Use a variable to keep track of how many consecutive 0s have been stored; when the count reaches `N`, it's time to store 1.

---

```
#define N 10

double ident[N][N], *p;
int i = 0;

for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++, i--)
{
    if (i == 0)
    {
        *p = 1.0;
        i  = N + 1;
    }
    else
    {
        *p = 0.0;
    }
}

```
