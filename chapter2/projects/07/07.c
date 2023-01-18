/*
* C programming: A Modern Approach. Chapter 02, Project 07
* Date: January 2023
* Author: ffstlln
* Description: Decomposes a dollar ammount into the smallest number of number 
* of $20, $10, $5 and $1 bills.
*/

#include <stdio.h>

int main(void)
{
    int total;


    printf("Enter a dollar amount: ");
    scanf("%d", &total);

    printf("$20 bills: %d\n", total / 20);
    total = total - (total / 20) * 20;

    printf("$10 bills: %d\n", total / 10);
    total = total - (total / 10) * 10;

    printf("$ 5 bills: %d\n", total / 5);
    total = total - (total / 5) * 5;

    printf("$ 1 bills: %d\n", total);
    

    return 0;
}
