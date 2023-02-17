# Chapter 07 - Exercise 06

For each of the following items of data, specify which one of the types `char`, `short`, `int`, or `long` is the smallest one guaranteed to be large enough to store the item.

(a) Days in a month
(b) Days in a year
(c) Minutes in a day
(d) Seconds in a day

---

(a) The maximum number number of days in a month is `31`, which fits in the smallest integer data type `char` (minimum of 8 bits).  

(b) A year has either `365` or `366` days. A `short` (or `short int`), whose minimum size is 16 bits can store the item.  

(c) A day has `1440` minutes. A `short` can store the item.  

(d) A day has `86400` seconds. A variable of type `long` or `long int` whose minimum size is 32 bits is the smallest data type to store the item.  
