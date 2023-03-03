/*
 * C programming: A Modern Approach. Chapter 08, Project 04
 * Date: February 2023
 * Author: ffstlln
 * Description: Reverses a series of numbers
 */

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], i;
    
    printf("Enter %d numbers: ", N);
    for (i = 0; i < (int) (sizeof(a) / sizeof(a[0])); i++)
    {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for (i = (int) (sizeof(a) / sizeof(a[0])) - 1; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
