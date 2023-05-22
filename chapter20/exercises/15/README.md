# Chapter 20 - Exercise 15

(a) Assume that the variable `s` has been declared as follows:  

```
struct {
    int flag: 1;
} s;
```

With some compilers, executing the following statements causes 1 to be displayed, but with other compilers, the output is –1. Explain the reason for this behavior.

```
s.flag = 1;
printf("%d\n", s.flag);
```

(b) How can this problem be avoided?  

---

(a) The behavior may vary depending on the compiler. The interpretation of the 1-bit field flag as a signed bit or a regular bit is implementation-defined. Some compilers treat the 1-bit field as a signed bit, where the value 1 is represented as -1 (due to two's complement representation), others treat it as an unsigned bit, where the value 1 remains as 1.  

(b)
Strictly adding type specifiers (such as `unsigned int flag: 1`) to the bit-field structure member avoids this issue.  
