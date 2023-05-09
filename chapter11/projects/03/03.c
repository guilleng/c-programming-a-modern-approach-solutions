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
 * Returns the greatest common divisor between `m` and `n`.
 */
int gcd(int m, int n)
{
    return n == 0 ? m : gcd(n, m % n);
}

/*
 * Assigns to the references `reduced_numerator` and `reduced_denominator` 
 * values such that the fraction they represent is reduced. 
 */
void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator)
{
    int greatest_common_divisor = gcd(numerator, denominator);

    *reduced_numerator   = numerator   / greatest_common_divisor;
    *reduced_denominator = denominator / greatest_common_divisor;

    return;
}

