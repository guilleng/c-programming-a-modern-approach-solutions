/*
 * C programming: A Modern Approach. Chapter 06, Project 03
 * Date: February 2023
 * Description: Reduces a fraction to its lowest terms.
 */

#include <stdio.h>

int main(void)
{
    int m, n, gcd, numerator, denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    n = numerator;
    m = denominator;

    while (1)
    {
        if (n == 0)
        {
            gcd = m;
            break;
        }
        int remainder;
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In the lowest terms: %d/%d\n", numerator / gcd, denominator /gcd);
    return 0;
}
