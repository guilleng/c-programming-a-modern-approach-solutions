/*
 * C programming: A Modern Approach. Chapter 05, Project 07
 * Date: January 2023
 * Author: ffstlln
 * Description: Finds the largest and smallest of four integers.
 */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, max1, max2, min1, min2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 >= n2)
    {
        max1 = n1;
        min1 = n2;
    } 
    else 
    { 
        max1 = n2;
        min1 = n1;
    }

    if (n3 >= n4)
    {
        max2 = n3;
        min2 = n4;
    }
    else 
    {
        max2 = n4;
        min2 = n3;
    }

    printf("Largest: %d\nSmallest: %d\n", 
            max2 > max1 ? max2 : max1,
            min1 < min2 ? min1 : min2);

    return 0;
}
