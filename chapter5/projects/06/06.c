/*
 * C programming: A Modern Approach. Chapter 05, Project 06
 * Date: January 2023
 * Author: ffstlln
 * Description: Verifies an UPC code.
 */

#include<stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check,
        first_sum, second_sum, total;

    printf("Enter a full UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
            &d,
            &i1, &i2, &i3, &i4, &i5,
            &j1, &j2, &j3, &j4, &j5,
            &check);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    if ((9 - ((total -1) % 10)) == check)
    {
        printf("VALID");
    }
    else
    {
        printf("NOT VALID");
    }

    return 0;
}
