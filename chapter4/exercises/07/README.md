# Chapter 04 - Exercise 07

The algorithm for computing the UPC check digit ends with the following steps:  
Subtract 1 from the total.  
Compute the remainder when the adjusted total is divided by 10.  
Substract the remaninder from 9.  
It's tempting to try to simplify the algorithm by using these steps instead:  
Compute the remainder when the total is divided by 10.  
Substract the remainder from 10.  
Why doesn't this techninque work?  

---

The original algorithm's statement is: `9 - ((total -1) % 10)`  
The simplified statement has the form: `10 - ((total / 10) % 10)`

The simplified statement may output a check digit of 10.  
The statements do not produce the same output given the same input.  
