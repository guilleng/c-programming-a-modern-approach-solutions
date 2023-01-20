/*
* C programming: A Modern Approach. Chapter 04, Project 02
* Date: January 2023
* Author: ffstlln
* Description: Reverses a three-digit number
*/

#include<stdio.h>

int main(void)
{
    int n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    printf("The reversal is: %d%d%d", n % 10, n / 10 % 10, n / 100);

    return 0;
}
