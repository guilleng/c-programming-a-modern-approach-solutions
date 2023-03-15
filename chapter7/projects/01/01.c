/*
 * C programming: A Modern Approach. Chapter 07, Project 01
 * Date: February 2023
 * Description: Modifications to square2.c for testing overflow conditions.
 */

#include <stdio.h>

int main(void)
{
    long n;

    printf("sizeof n = %lu\n", sizeof(long));
    printf("This program prints a table of squares,\n");
    printf("Enter 3,037,000,500 (number of entries in table): ");
    scanf("%ld", &n);

    /* i is initialized to a very large value to quickly see an overflow */
    for (long i = 3037000498; i <= n; i++)
    {
        printf("%25ld%25ld\n", i, i * i);
    }

    return 0;
}
