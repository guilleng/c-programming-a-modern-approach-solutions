# Chapter 26 - Project 01

(a) Write a program that calls the `rand` function 1000 times, printing the low-order bit of each value it returns (0 if the return value is even, 1 if it’s odd). Do you see any patterns?  (Often, the last few bits of rand’s return value aren’t especially random.)

(b) How can we improve the randomness of `rand` for generating numbers within a small range?

---

(b)
The [book answer](http://knking.com/books/c2/answers/c26.html) proposes the alternative formula `rand() / (RAND_MAX / N + 1)`  For generating numbers in the range `0` to `N - 1`. 
The reasoning behind is that when dividing `rand()` by `RAND_MAX / 2 + 1`, we effectively divide the range into `2` equally sized parts. This approach ensures an equal probability for both outcomes, providing a fair distribution between 0 and 1.  
