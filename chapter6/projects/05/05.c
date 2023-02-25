/*
 * C programming: A Modern Approach. Chapter 06, Project 05
 * Date: February 2023
 * Author: ffstlln
 * Description: Reverses an integer number.
 */

#include<stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    printf("The reversal is: ");

    do {
        printf("%d", n % 10);
        n /= 10;
    } while (n != 0);

    return 0;
}
