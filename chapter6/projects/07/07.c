/*
 * C programming: A Modern Approach. Chapter 06, Project 07
 * Date: February 2023
 * Author: ffstlln
 * Description: Prints a table of squares.
 */

#include <stdio.h>

int main(void)
{
    int n, odd;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    odd = 3;
    for(int i = 1, square = 1; i <= n; i++, odd +=2)
    {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}

