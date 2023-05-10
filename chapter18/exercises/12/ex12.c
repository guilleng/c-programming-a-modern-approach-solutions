/*
 * C programming: A Modern Approach. Chapter 18, exercise 12
 * Date: May 2023
 * Description: Complex function call using function pointers. 
 */

#include <stdio.h>
#include <stdlib.h>

/*** (a) Description of `f`'s type: 
 *
 * * `f` is a function that takes two arguments, 
 * (1) a pointer to a function that takes a `long` and returns a `float` and 
 * (2) a pointer to `char`, 
 * `f` returns a pointer to a function that takes a `double` argument and 
 * returns an `int`.
 */

/*** (b) Calling `f`:
 */

/* function that takes a long and returns a float */
float g(long n)
{
    return n + 2.0;
}

/* function to return from f */
int h(double d)
{
    return (int)(d * 2);
}

/* f assigns the result of calling the function pointed to by fp with the value 
 * 118 to the character pointed to by ch, and returns a pointer to h */
int (*f(float (*fp)(long), char *ch))(double)
{
    *ch = (int) (*fp)(118);
	return h;
}

int main(void)
{
    char ch = 'a';
    double d = 3.1415;
    int result;

    /* compatible pointer to assign the address f returns */
    int (*returned_function)(double);		 

    /* call f with pointer to g and ch */
    returned_function = f(&g, &ch);  		 

    /* call the resulting function with d */
    result = (*returned_function)(d);  

    printf("Result: %d\n", result);           /* prints "Result: 6" */
    printf("Ch: %c\n", ch);                   /* prints "Ch: x" */


/* calling f directly */
    ch = '0', d = 2.7182;

    printf("Result: %d\n", (f(&g, &ch))(d));  /* prints "Result: 5" */
    printf("Ch: %c\n", ch);                   /* prints "Ch: x" */

    exit(EXIT_SUCCESS);
}
