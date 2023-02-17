/*
* C programming: A Modern Approach. Chapter 07, Project 09
* Date: February 2023
* Author: ffstlln
* Description: transforms user inputted 12-hour time to 24-hour form
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hh, mm;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hh, &mm, &ch);

    if (hh == 12)
    {
        hh = 0;
    }

    if ( (toupper(ch) == 'P' ) )
    {
        hh += 12;
    }

    printf("Equivalent 24-hour time: %02d:%02d", hh, mm);
    return 0;
}
