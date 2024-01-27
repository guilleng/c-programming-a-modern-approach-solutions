# Chapter 21 - Project 01

Write a program that declares the `s` structure (see Section 21.4) and prints
the sizes and offsets of the `a`, `b`, and `c` members.  (Use `sizeof` to find
sizes; use `offsetof` to find offsets.)  Have the program print the size of the
entire structure as well.  From this information, determine whether or not the
structure has any holes.  If it does, describe the location and size of each.


---

The `s` structure as defined in Section 21.4:

```C
struct s {
	char a;
	int b[2];
	float c;
};
```

Program output: 

```bash
sizeof struct s     16

sizeof char          1
       int[2]        8
       char          1
       float         4
sum of members      14

offsetof a (char)    0
         b (int[2])  4
         c (float)  12
```

There is a 3-byte padding between `a` and `b`, which accounts for the difference
between the sum of member sizes (14 bytes) and the overall size of the structure
(16 bytes). 

```
+---------+---------+---------+---------+---------+
|    a    |   pad   |   b[0]  |   b[1]  |    c    |
+---------+---------+---------+---------+---------+
|<-- 1 -->|<-- 3 -->|<-- 4 -->|<-- 4 -->|<-- 4 -->|
```
