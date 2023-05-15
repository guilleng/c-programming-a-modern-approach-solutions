/*
 * C programming: A Modern Approach. Chapter 05, Project 01
 * Date: January 2023
 * Description: Prints the number of digits of an integer.
 */

#include <stdio.h>

int main(void) 
{
    int n;

    printf("Enter an unsigned integer that is four digits at most: ");
    scanf("%d", &n);

    if (n > 0 && n < 9)
    {
        printf("The number %d has 1 digits\n", n);
    }
    if (n > 9 && n < 99)
    {
        printf("The number %d has 2 digits\n", n);
    }
    if (n > 99 && n < 999)
    {
        printf("The number %d has 3 digits\n", n);
    }
    if (n > 999 && n < 9999)
    {
        printf("The number %d has 4 digits\n", n);
    }

    return 0;
}
