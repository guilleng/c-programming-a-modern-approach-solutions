# Chapter 04 - Project 06

European countries use a 13-digit code, known as a European Article Number (EAN)
instead of the 12-digit Universal Product Code (UPC) found in North America. 
Each EAN ends with a check digit, just as a UPC does. The technique for
calculating the check digit is also similar:

     Add the second, fourth, sixth, eighth, tenth, and twelfth digits.  
     Add the first, third, fifth, seventh, ninth, and eleventh digits.  
     Multiply the first sum by 3 and add it to the second sum.  
     Subtract 1 from the total.  
     Compute the remainder when the adjusted total is divided by 10.  
     Subtract the reamainder from 9.  

```
Enter the first 12 digits of an EAN: 869148426000
Check digit: 8
```
