# Chapter 16 - Exercise 04

Repeat Exercise 3, but this time using a _type_ named `Complex`.


---

(a)
```C
typedef struct {
    double real;
    double imaginary;
} Complex;
```

(b)
```C
Complex c1, c2, c3;
```

(c)
```C
Complex make_complex(double r, double i)
{
    Complex new;
    new.real = r;
    new.imaginary = i;

    return new;
}
```

(d)
```C
Complex add_complex(Complex a, Complex b)
{
    Complex new;
    struct new.real = a.real + b.real;
    new.imaginary = a.imaginary + b.imaginary;

    return new;
}
```
