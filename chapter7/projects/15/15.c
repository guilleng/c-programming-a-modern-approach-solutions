/*
* C programming: A Modern Approach. Chapter 07, Project 15
* Date: February 2023
* Author: ffstlln
* Description: computes the factorial of an integer
*/

#include <stdio.h>

int main(void)
{
    unsigned short n;
    long double factorial = 1.0f;

    printf("Enter a positive integer: ");
    scanf("%hu", &n);

    while(1)
    {
        if (n == 0) 
        {
            break;
        }
        
        factorial = factorial * n;
        n--;
    }

    printf("Factorial: %Lg\n", factorial);
    return 0;
}
