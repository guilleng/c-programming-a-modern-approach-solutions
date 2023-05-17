# Chapter 16 - Exercise 15

(a) 
Declare a tag for an enumeration whose values represent the seven days of the week.  

(b) 
Use `typedef` to define a name for the enumeration of part (a).  

---

(a)
```
enum Day { MONDAY = 0, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
```

(b)
```
typedef enum { MONDAY = 0, TUESDAY, WEDNESDAY, THURSDAY, 
               FRIDAY, SATURDAY, SUNDAY } Days;
```
