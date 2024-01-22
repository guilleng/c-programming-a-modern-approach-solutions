# Chapter 16 - Exercise 03

(a) Show how to declare a tag named `complex` for a structure with two members,
`real` and `imaginary`, of type `double`.

(b) Use the complex tag to declare variables named `c1`, `c2` and `c3`.

(c) Write a function named `make_complex` that stores its two arguments (both of
type `double`) in a `complex` structure, then returns the structure.

(d) Write a function named `add_complex` that adds the corresponding members of
its arguments (both `complex` structures), then returns the result (another
`complex` structure)


---

(a)
```C
struct Complex {
    double real;
    double imaginary;
};
```

(b)
```C
struct Complex c1, c2, c3;
```

(c)
```C
struct Complex make_complex(double r, double i)
{
    struct Complex new;
    new.real = r;
    new.imaginary = i;

    return new;
}
```

(d)
```C
struct Complex add_complex(struct Complex a, struct Complex b)
{
    struct Complex new;
    new.real = a.real + b.real;
    new.imaginary = a.imaginary + b.imaginary;

    return new;
}
```
