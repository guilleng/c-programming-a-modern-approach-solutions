/*
* C programming: A Modern Approach. Chapter 03, Project 05
* Date: January 2023
* Author: ffstlln
* Description: Ask for user input, outputs as a 4x4 matrix and perform row
* column, and diagonal sums
*/

#include<stdio.h>

int main(void)
{
    int n01, n02, n03, n04, n05, n06, n07, n08,
        n09, n10, n11, n12, n13, n14, n15, n16;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf(" %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
            &n01, &n02, &n03, &n04, &n05, &n06, &n07, &n08, 
            &n09, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    printf("\n%2d %2d %2d %2d\n
              %2d %2d %2d %2d\n
              %2d %2d %2d %2d\n
              %2d %2d %2d %2d\n",
            n01, n02, n03, n04, n05, n06, n07, n08,
            n09, n10, n11, n12, n13, n14, n15, n16);

    printf("\nRow sums: %d %d %d %d\n",  n01+n05+n09+n13,
                                         n02+n06+n10+n14,
                                         n03+n07+n11+n15,
                                         n04+n08+n12+n16);

    printf("Column sums: %d %d %d %d\n", n01+n02+n03+n04,
                                         n05+n06+n07+n08,
                                         n09+n10+n11+n12,
                                         n13+n14+n15+n16);

    printf("Diagonal sums: %d %d\n", n01+n06+n11+n16, n04+n07+n10+n13);

    return 0;
}
