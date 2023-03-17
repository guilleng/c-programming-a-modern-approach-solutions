# Chapter 10 - Exercise 02

The following program outline shows only function definitions and variable declarations.  

```
int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main(void)
{
    int c, d;
}
```

For each of the following scopes, list all variable and parameter names visible in that scope.  

(a) The `f` function.  
(b) The `g` function.  
(c) The block in which `a` and `d` are declared.  
(d) The `main` function.   

---


(a)
__Variable names visible__:   
The variables `d` and `b` declared in line 5. The name `b` is _shadowing_ the global variable of the same name in line 1, it remains in scope for the execution of the function call.  

__Parameter names visible__:  
None.  

(b)
__Variable names visible__:  
The external variable `b` is in scope for the duration of the function call.   
The local variable `c` declared in line 10 _shadows_ the global variable of the same name from line 1, remaining in scope for the execution of the function call.  
The variables `a` and `d` declared in line 11 are both visible only within the block in which they are declared. A caveat: when program control enters the block, the variable `a` declared inside it shadows the function parameter of the same name.  

__Parameter names visible__:
The parameter name `a` is visible up until program control reaching line 11, where a declaration of a variable using its same name shadows it for the code block between lines 10 and 12.  

(c)
__Variable names visible__:  
The global variable `b` and the external variable `c` declared in line 10.  
The local variables `a` (shadowing the function parameter) and the name `d` declared inside the code block.  


__Parameter names visible__:  
None.    

(d)
__Variable names visible__:  
The external variable `b` is in scope during the execution of `main`.  
The local variables `d` and `c`, the latter shadowing the external declaration of the same name in line 1.  

__Parameter names visible__: 
None.  

