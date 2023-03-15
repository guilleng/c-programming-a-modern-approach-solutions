/*
 * C programming: A Modern Approach. Chapter 09, Project 06
 * Date: March 2023
 * Description: Computes the value of the polynomial:
 *              3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6
 */

#include <stdio.h>

double evaluate_polynomial(double x);

int main(void)
{
    double x;

    printf("f(x) = 3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6\n");
    printf("Enter an x value: ");
    scanf("%lf", &x);

    printf("f(%g) = %g", x, evaluate_polynomial(x));

    return 0;
}

double evaluate_polynomial(double x)
{
    // Horner's Method (See Chapter 02 - Project 06)
    return (-6 + x * (7 + x * (-1 + x * (-5 + x * (2 + 3 * x)))));
}
