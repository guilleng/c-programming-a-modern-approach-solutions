/*
* C programming: A Modern Approach. Chapter 05, Project 02
* Date: January 2023
* Author: ffstlln
* Description: reformats a 24-hour input to its equivalent 12-hour format.
*/

#include <stdio.h>

int main(void)
{
    int hh, mm;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hh, &mm);

    if (hh < 12)
    {
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hh, mm);
    }
    else
    {
        printf("Equivalent 12-hour time: %.2d:%.2d PM", 
                hh == 12 ? hh : hh - 12, mm);
    }

    return 0;
}
