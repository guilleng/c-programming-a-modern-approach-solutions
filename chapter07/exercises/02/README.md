# Chapter 07 - Exercise 02

Which of the following are not legal constants in C?  Classify each legal
constant as either integer or floating-point.

(a) `010E2`

(b) `32.1E+5`

(c) `0790`

(d) `100_000`

(e) `3.987e-2`


---

(a)
Floating-point (`double`) decimal constant.  `010E2` is an unnecessarily
confusing way to write `10E2`.  Usually a leading `0` in a numeric constant
indicates that the constant is in octal format, but there are no octal
floating-point constants in C.

The decimal number it represents has `1 * 10^1 + 0 * 10^0 = 10` as coefficient
and `2` as exponent. It represents the number `10 * 10^2 = 1000.0`.

(b) 
Floating point(`double`) decimal constant, representing the number 
`32.1 * 10^5 = 3,210,000.0`.

(c)
Illegal. Octal constants begin with a `0` and contain only digits between `0`
and `7`. `9` is an invalid digit in octal constants.

(d)
Illegal, `_` is not a valid character for a numeric constant.

(e)
Floating point(`double`) decimal constant, representing the number 
`3.978 * 10^-2 = 0.03978`.
