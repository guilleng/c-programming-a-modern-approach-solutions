/*
 * C programming: A Modern Approach. Chapter 02, project 05
 * Date: January 2023
 * Author: ffstlln
 * Description: Evaluates a polynomial.
 */

#include <stdio.h>

int main(void)
{
    float x;

    printf("f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter a value for x: ");
    scanf("%f", &x);
    printf("f(x) = %.2f\n", 
            (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6);

    return 0;
}
