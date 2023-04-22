# Chapter 15 - Project 01

The justify program of Section 15.3 justifies lines by inserting extra spaces between words. The way the `write_line` function currently works, the words closer to the end of a line tend to have slightly wider gaps between them than the words at the beginning. (For example, the words closer to the end might have three spaces between them, while the words closer to the beginning might be separated by only two spaces.) Improve the program by having `write_line` alternate between putting the larger gaps at the end of the line and putting them at the beginning of the line.  

---

## Input:

```
   C is quirky,     flawed          and  an 
enormous  success.      Although accidents of   history
   surely helped,    it evidently    satisfied   a   need 

for a system    implementation    language    efficient
enough  to  displace            assembly   language,    
yet sufficiently   abstract  and fluent         to describe
 algorithms and     interactions   in a      wide    variety
of environments.        
                    --      Dennis  M.     Ritchie
```

---

### Original output: 

```
C is  quirky,  flawed  and  an  enormous  success.  Although
accidents of history surely helped, it evidently satisfied a
need for a system implementation language  efficient  enough
to displace assembly language, yet sufficiently abstract and
fluent to describe algorithms and  interactions  in  a  wide
variety of environments. -- Dennis M. Ritchie
```

---

### Output after requested changes to source code:

```
C  is quirky,  flawed   and  an enormous   success. Although
accidents of history surely helped, it evidently satisfied a
need  for  a system implementation language efficient enough
to displace assembly language, yet sufficiently abstract and
fluent  to describe  algorithms and interactions  in a  wide
variety of environments. -- Dennis M. Ritchie
```
