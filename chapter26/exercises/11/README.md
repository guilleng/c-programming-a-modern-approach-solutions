# Chapter 26 - Exercise 11

Although the `bsearch` function is normally used with a sorted array, it will sometimes work correctly with an array that is only partially sorted. What condition must an array satisfy to guarantee that `bsearch` works properly for a particular key? _Hint_: The answer appears in the C standard.

---

The reason `bsearch` works correctly despite an array not being properly sorted, is because the portion of the array where the search is performed is sorted in ascending order and the key values have no 'gaps' between them.  
If `rarr` is: `{2, 1, 5, 3, 4, 6, 7 , 8, 10, 11}` the `bsearch` function will not work.  

See `halfsorted.c`. 
