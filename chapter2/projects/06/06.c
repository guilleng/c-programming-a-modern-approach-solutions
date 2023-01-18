/*
* C programming: A Modern Approach. Chapter 02, Project 05
* Date: January 2023
* Author: ffstlln
* Description: Modification of Project 5 using Horner's Rule.
*/

#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = (((((3x + 2)x - 5)x - 1)x + 7)x - 6) = %.2f\n",
            (((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6));
    return 0;
}
