/*
 * C programming: A Modern Approach. Chapter 03, Project 04
 * Date: January 2023
 * Author: ffstlln
 * Description: Prompts user for a telephone number and prints it reformatted.
 */

#include<stdio.h>

int main(void)
{
    int braced, three, four;

    printf("Enter phone number: [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &braced, &three, &four);

    printf("You entered: %03d.%03d.%04d\n", braced, three, four);

    return 0;
}
