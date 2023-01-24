/*
* C programming: A Modern Approach. Chapter 04, Project 01
* Date: January 2023
* Author: ffstlln
* Description: Reverses a two-digit number
*/

#include<stdio.h>

int main(void)
{
    int n;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d", n % 10, n / 10);

    return 0;
}
