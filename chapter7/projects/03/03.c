/*
* C programming: A Modern Approach. Chapter 07, Project 03
* Date: February 2023
* Author: ffstlln
* Description: sums a series of user inputted numbers
*/

#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter a number (0 to terminate):\n");

    scanf("%lf", &n);
    while(n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %g\n", sum);
    return 0;
}
