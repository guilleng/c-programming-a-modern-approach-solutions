/*
 * C programming: A Modern Approach. Chapter 07, Project 15
 * Date: February 2023
 * Description: Computes the factorial of an integer.
 */

#include <stdio.h>

int main(void)
{
    unsigned short n;
    long double factorial = 1.0;

    printf("Enter a positive integer: ");
    scanf("%hu", &n);

    while(1)
    {
        if (n == 0) 
        {
            break;
        }
        factorial *= n;
        n--;
    }

    printf("Factorial: %Lf\n", factorial);
    return 0;
}
