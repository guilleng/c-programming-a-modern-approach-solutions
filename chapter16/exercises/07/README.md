# Chapter 16 - Exercise 07

Assume that the `Fraction` structure contains two members: `numerator` and
`denominator` (both of type `int`).  Write functions that perform the following
operations on fractions:

(a) Reduce the fraction `f` to lowest terms.  _Hint_: To reduce a fraction to
lowest terms, first compute the greatest common divisor (GCD) of the numerator
and denominator.  Then divide both the numerator and denominator by the GCD.

(b) Add the fractions `f1` and `f2`.

(c) Subtract the fraction `f2` from the fraction `f1`.

(d) Multiply the fractions `f1` and `f2`.

(e) Divide the fraction `f1` by the fraction `f2`.

The fractions `f`, `f1` and `f2` will be arguments of type `struct fraction`:
each function will return a value of type `struct fraction`.  The fractions
returned by the functions in parts (b)-(e) should be reduced to lowest terms.
_Hint_: You may use the function from part (a) to help write the functions in
parts (b)-(e).


---

This definitions assume that a `Fraction` structure never has a zero
denominator.

```C
struct Fraction {
    int numerator;
    int denominator;
};
```

(a)
```C
/*
 * Returns the GCD between the positives integers a and b.
 */
int find_gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return find_gcd(b, a % b);
    }
}

struct Fraction reduce(struct Fraction f)
{
    int a = (f.numerator < 0)   ? -f.numerator   : f.numerator;
    int b = (f.denominator < 0) ? -f.denominator : f.denominator;

    int gcd = find_gcd(a, b);
    f.numerator   /= gcd;
    f.denominator /= gcd;

    if (f.denominator < 0)
    {
        f.numerator   *= -1;
        f.denominator *= -1;
    }

    return f;
}
```

(b)
```C
struct Fraction addition(struct Fraction f1, struct Fraction f2)
{
    struct Fraction r;

    r.numerator   = (f2.denominator * f1.numerator + 
                     f1.denominator * f2.numerator);
    r.denominator = (f1.denominator * f2.denominator);

    return reduce(r);
}
```

(c)
```C
struct Fraction subtraction(struct Fraction f1, struct Fraction f2)
{
    f2.numerator *= -1;
    return addition(f1, f2);
}
```

(d)
```C
struct Fraction multiplication(struct Fraction f1, struct Fraction f2)
{
    f1.numerator   *= f2.numerator;
    f1.denominator *= f2.denominator;
    return reduce(f1);
}
```

(e)
```C
struct Fraction division(struct Fraction f1, struct Fraction f2)
{
    f1.numerator   *= f2.denominator;
    f1.denominator *= f2.numerator;
    return reduce(f1);
}
```
