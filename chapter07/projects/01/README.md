# Chapter 07 - Project 01

The `square2.c` program of Section 6.3 will fail (usually by printing strange answers) if `i * i` exceeds the maximum `int` value. Run the program and determine the smallest value of `n` that causes failure. Try changing the type of `i` to `short` and running the program again. (Don't forget to update the conversion specifications in the call of `printf`!) Then try `long`. From these experiments, what can you conclude about the number of bits used to store integer types on your machine?

---

1. Declaring `int i;`

`sizeof(int)` is `4` bytes in this machine, the number of bits an `int` uses in memory is then `4 * 8 = 32`.  
Because the most significant bit stores the sign, the maximum positive value this type holds is `2^31 - 1 = 2,147,483,647`. 
Therefore the value of `i` that should cause overflow is `sqrt(2,147,483,647) + 1 = 46,341`.   
  
The final entries of the program's output show the overflow conditions:  

```
46339              2147302921
46340              2147395600
46341             -2147479015
```

2. Declaring `short i;`

`sizeof(short) is `2` bytes (8 bits). The maximum positive value this datatype fits is `2^15 - 1 = 32,767`.  
The value of `i` that should cause an overflow is `sqrt(32,767) + 1 = 182`  

```
180                  32400
181                  32761
182                 -32412
```

3. Declaring `long i;`

`sizeof(long)` is `8` bytes (64 bits). The maximum positive integer this datatype fits is `2^63 - 1 = 9,223,372,036,854,775,801`  
The value of `n` that should cause an overflow is `sqrt(9,223,372,036,854,775,801) + 1 = 3,037,000,500`  

```
3037000498      9223372024852248004
3037000499      9223372030926249001
3037000500     -9223372036709301616
```
