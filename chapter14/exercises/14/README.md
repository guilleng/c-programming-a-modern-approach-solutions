# Chapter 14 - Exercise 14

Show what the following program will look like after preprocessing. Some lines of the program may cause compilation errors; find all such errors.  

```
#define N = 10
#define INC(x) x+1
#define SUB (x,y) x-y
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)*(x))
#define M1(x,y) x##y
#define M2(x,y) #x #y

int main(void)
{
    int a[N], i, j, k, m;

#ifdef N
    i = j;
#else
    j = i;
#endif
    
    i = 10 * INC(j);
    i = SUB(j, k);
    i = SQR(SQR(j));
    i = CUBE(j);
    i = M1(j, k);
    puts(M2(i, j));
    
#undef SQR
    i = SQR(j);
#define SQR
    i = SQR(j);
    
    return 0;
}
```

---

The preprocessed source code:  

```
int main(void)
{
    int a[= 10], i, j, k, m;


    i = j;




    i = 10 * j+1;
    i = (x,y) x-y(j, k);
    i = ((((j)*(j)))*(((j)*(j))));
    i = (((j)*(j))*(j));
    i = jk;
    puts("i" "j");


    i = SQR(j);

    i = (j);

    return 0;
}
```

The first line of the main function contains a syntax error in the array declaration `a[= 10]`.  
All assignments in this source code may produce undefined behavior. Neither `j`, `k` nor `m` are initialized.  
The line `i = 10 * j+1;` seems intended to be `i = 10 * ((j)+1)`. If this is the case, the macro is missing parentheses.  
`i = (x,y) x-y(j, k);` should be `i = (j) - (k), the macro definition is missing parentheses around the x and y arguments.  
`i = jk;` The name `jk` is not in scope.  
`i = SQR(j);` After being undefined in the previous line, `SQR` is called.  
`i = (j);` After being defined `SQR` is called but because it has no tokens it evaluates to nothing.  
