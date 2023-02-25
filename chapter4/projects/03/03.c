/*
 * C programming: A Modern Approach. Chapter 04, Project 03
 * Date: January 2023
 * Author: ffstlln
 * Description: Reverses a three-digit number without using arithmetic.
 */

#include<stdio.h>

int main(void)
{
    int d0, d1, d2;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d0, &d1, &d2);

    printf("The reversal is: %d%d%d", d2, d1, d0);

    return 0;
}
