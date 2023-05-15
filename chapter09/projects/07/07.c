/*
 * C programming: A Modern Approach. Chapter 09, Project 07
 * Date: March 2023
 * Description: Computes the then nth power of an integer recursively.  
 */

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x, n;
    printf("This program computes x^n\n");

    printf("Enter an integer value for x: ");
    scanf("%d", &x);
    printf("Enter an integer value for n: ");
    scanf("%d", &n);

    printf("%d^%d = %d", x, n, power(x, n));

    return 0;
}

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if(n % 2 == 0)
    { 
        return ( power(x, n / 2)  * power(x, n / 2) );
    }
    else
    {
        return x * power(x, n - 1);
    }
}
