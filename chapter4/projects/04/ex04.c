/*
* C programming: A Modern Approach. Chapter 04, Project 04
* Date: January 2023
* Author: ffstlln
* Description: Changes a base 10 number to base 8
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);
    
    printf("In octal, your number is: %d%d%d%d%d", 
            (n / 8 / 8 / 8 / 8) % 8,
            (n / 8 / 8 / 8) % 8,
            (n / 8 / 8) % 8,
            (n / 8) % 8,
             n % 8);

    return 0;
}
