# Chapter 16 - Exercise 19

Declare a structure with the following members whose tag is `pinball_machine`:

`name` -- a string of up to 40 characters

`year` -- an integer (representing the year of manufacture) 

`type` -- an enumeration with the values EM (electromechanical) and SS (solid
          state)

`players` -- an integer (representing the maximum number of players)


---

```C
struct pinball_machine {
    char name[40];
    int year;
    enum { EM, SS } type;
    int players;
};
```
