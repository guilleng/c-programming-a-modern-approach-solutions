/*
 * C programming: A Modern Approach. Chapter 11, Project 03
 * Date: March 2023
 * Description: Reduces a fraction to its lowest terms.
 */

#include <stdio.h>

int gcd(int m, int n);
void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator, reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf(" %d/ %d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("In the lowest terms: %d/%d\n", 
            reduced_numerator, reduced_denominator);

    return 0;
}

/*
 * Returns the greatest common denominator between `m` and `n`.
 */
int gcd(int m, int n)
{
    return n == 0 ? m : gcd(n, m % n);
}

/*
 * Uses the `gcd` function to determine and assign to the references 
 * `reduced_numerator` and `reduced_denominator` values such that they represent 
 * the reduced version of the fraction `numerator/denominator`.
 */
void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator)
{
    int greatests_common_divisor = gcd(numerator, denominator);

    *reduced_numerator   = numerator   / greatests_common_divisor;
    *reduced_denominator = denominator / greatests_common_divisor;

    return;
}

