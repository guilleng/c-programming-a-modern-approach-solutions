# Chapter 09 - Exercise 10

Write functions that return the following values. (Assume that `a` and `n` are parameters, where `a` is an array of `int` values and `n` is the length of the array.)

(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.

---

(a)
```
int largest_element(int a[], int n);

...

int largest_element(int a[], int n)
{
    int largest = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }

    return largest;
}
```

(b)
```
double average(int a[], int n);

...

double average(int a[], int n)
{
    double accumulator = a[0];
    for(int i = 1; i < n; i++)
    {
        accumulator += a[i];
    }
    
    return accumulator / n;
}
```

(c)
```
unsigned int positive_count(int a[], int n);

...

unsigned int positive_count(int a[], int n)
{
    unsigned int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            count++;
        }
    }

    return count;
}
```
