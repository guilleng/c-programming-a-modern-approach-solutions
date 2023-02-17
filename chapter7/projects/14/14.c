/*
* C programming: A Modern Approach. Chapter 07, Project 14
* Date: February 2023
* Author: ffstlln
* Description: uses Newton's method to compute the square root of a number
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double y = 1, x;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while(1)
    {
        double next_approximation = (y + (x/y)) / 2.0f;

        if( fabs(y - next_approximation) < (.00001f * y))
        {
            break;
        }
        else
        {
            y = next_approximation;
        }
    }

    printf("Square root: %f", y);
    return 0;
}
