# Chapter 10 - Exercise 01

The following program outline shows only function definitions and variable declarations.

```
int a;

void f(int b)
{
    int c;
}

void g(void)
{
    int d;
    {
        int e;
    }
}

int main(void)
{
    int f;
}
```

For each of the following scopes, list all variable and parameter names visible in that scope:

(a) The `f` function  
(b) The `g` function  
(c) The block in which `e` is declared  
(d) The `main` function  

---

(a)
__Variable names visible__: `a` and `c`.  
__Parameter names visible__: `b`.  

(b)
__Variable names visible__: `a` and `d` within the whole function body. `e` after program control reaches its declaration and remains in scope only inside the code block in which it is declared.  
__Parameter names visible__: None.  

(c)
__Variable names visible__: `a`, `d` and `e`.  
__Parameter names visible__: None.  

(d)
__Variable names visible__: `a` and `f`.  
__Parameter names visible__: None.  

