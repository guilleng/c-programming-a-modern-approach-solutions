# Chapter 22 - Exercise 06

Write a call of `printf` that prints

```
1 widget
```

if the `widget` variable (of type int) has the value 1, and

```
n widgets
```

otherwise, where `n` is the value of `widget`. You are not allowed to use the if statement or any other statement; the answer must be a single call of `printf`.  

---

To produce the desired effect, we will rely on two facts:  

+ The `*` character can be used as a placeholder to dynamically 'pass' the value of `widget`.  
+ Using a null-terminated string as an argument is legal.  

```
printf("%d widget%.*s", widget, widget - 1, "s"); 
```

Let's examine the format specifier `"%.*s", widget - 1, "t"` and understand its behavior at runtime:  

If the value of widget is `0` or negative, the format specifier becomes `%.-1s`, `%.-2s`, `%.-3s`, and so on. In this case, at least one character from the string "s" will be printed.  
If widget equal to 1, the format specifier becomes `%.0s`, which means no characters from the string will be printed.  
If widget is greater than 1, the format specifier becomes `%.1s`, `%.2s`, `%.3s`... Again, at least one character from the string will be printed. 

By manipulating the format specifier based on the value of widget, we control the characters displayed from the string argument "s" (which consists of the character `'s'` followed by a null terminator `'\0'`). This allows us to achieve the desired output effect as requested.  
