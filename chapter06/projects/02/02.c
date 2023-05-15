/*
 * C programming: A Modern Approach. Chapter 06, Project 02
 * Date: February 2023
 * Description: Calculates and displays the greatest common divisor of two 
 *              integers.
 */

#include <stdio.h>

int main(void)
{
    int m, n, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

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

    printf("Greatest common divisor: %d", gcd);
    return 0;
}
