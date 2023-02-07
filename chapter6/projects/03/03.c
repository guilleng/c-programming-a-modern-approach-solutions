/*
* C programming: A Modern Approach. Chapter 06, Project 03
* Date: February 2023
* Author: ffstlln
* Description: Reduces a fraction to its lowest terms
*/

#include <stdio.h>

int main(void)
{
    int m, n, gcd, numerator, denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    n = numerator;
    m = denominator;

    while(1)
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

    numerator /= gcd;
    denominator /= gcd;

    printf("In the lowest terms: %d/%d", numerator, denominator);

    return 0;
}
