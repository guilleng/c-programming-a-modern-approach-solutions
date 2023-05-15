/*
 * C programming: A Modern Approach. Chapter 07, Project 14
 * Date: February 2023
 * Description: Uses Newton's method to compute the square root of a number.
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x,
           y = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while( fabs(y - (x / y)) > (.00001 * y) )
    {
        y = (y + (x / y)) / 2.0;
    }

    printf("Square root: %f", y);
    return 0;
}
