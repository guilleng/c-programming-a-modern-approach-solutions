# Chapter 16 - Exercise 08

Let color be the following structure:

```
struct color {
    int red;
    int green;
    int blue;
};
```

(a) 
Write a declaration for a `const` variable named `MAGENTA` of type `struct color` whose members have the values 255, 0 and 255, respectively.  

(b) 
(C99) Repeat part (a), but use a designated initializer that doesn't specify the value of `green`, allowing it to default to 0.

---


(a)
```
struct color const MAGENTA = { 255, 0, 255};
```

(b)
```
struct color const MAGENTA = { .red = 255, .blue = 255 };
```
