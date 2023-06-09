/*
 * C programming: A Modern Approach. Chapter 23, Project 01
 * Date: June 2023
 * Description: Solves a quadratic in the real numbers domain (R -> R)
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 1024

int main(void)
{
    char buffer[SIZE];
    double a, b, c, determinant;

    printf("Enter real coefficients a, b and c for a degree-2 polynomial:\n"
           "ax^2 + bx + c: ");

    fgets(buffer, SIZE, stdin);

    if (sscanf(buffer, " %lf %lf %lf", &a, &b, &c) != 3)
    {
        fprintf(stderr, "Error reading input\n");
        exit(EXIT_FAILURE);
    }

    determinant = b * b - 4 * a * c;

    if (a == 0 && b == 0)
    {
        printf("p(x) = %g has no roots\n", c);
    }
    else if (a == 0 && b != 0)
    {
        printf("Root:\n%g\n", -c / b);
    }
    else if (determinant >= 0)
    {
        double root1 = (-b + sqrt(determinant)) / (2 * a);
        double root2 = (-b - sqrt(determinant)) / (2 * a);
        printf("Roots:\n%g\n%g\n", root1, root2);
    }
    else
    {
        printf("Roots are complex\n");
    }

    exit(EXIT_SUCCESS);
}
