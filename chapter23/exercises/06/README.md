# Chapter 23 - Exercise 06

In each of the following cases, indicate which function would be the best to
use: `memcpy`, `memmove`, `strcpy`, or `strncpy`.  Assume that the indicated
action is to be performed by a single function call.

(a) Moving all elements of an array "down" one position in order to leave room
    for a new element in position 0.

(b) Deleting the first character in a null-terminated string by moving all other
    characters back one position.

(c) Copying a string into a character array that may not be large enough to hold
    it. If the array is too small, assume that the string is to be truncated; no
    null character is necessary at the end. 

(d) Copying the contents of one array variable into another.


---


(a) 
The appropriate function for this task is `memmove`.  It is so because it copies
the elements to a temporary buffer array as an intermediate step.  Thus overlaps
are handled correctly.  Assuming arr is not yet full, a call that achieves the
described effect is:

```C
memmove(arr, &arr[1], SIZE_OF_ARR);
```

(b)
`memmove` since the regions of memory overlap when shifting the characters back
by one position.  The following call achieves the desired effect:

```C
memmove(str, &str[1], strlen(str) + 1); 
```

(c)
`strncpy` is the appropriate function to use.  It copies the characters from the
source string to the destination array, and if the destination array is smaller
than the source string, it will truncate the string.  Assuming `n` is the size
of the destination buffer, the following call achieves the desired effect:

```C
strncpy(dest, source, n);
```

(d)
`memcpy` copies memory between not-overlapping regions of memory.

```C
memcpy(dest, source, SIZE_OF_ARR);
```
