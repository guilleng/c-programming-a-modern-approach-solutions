/*
* C programming: A Modern Approach. Chapter 06, Project 08
* Date: February 2023
* Author: ffstlln
* Description: Prints a one month calendar 
*/

#include <stdio.h>

int main(void)
{
    int days_in_month, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);
    
    printf("Enter starting day of the week (1=Mon, 2=Tue): ");
    scanf("%d", &starting_day);

    printf(" Mo Tu We Th Fr Sa Su\n");

    for(int i = 1, j = 1; i <= days_in_month; j++)
    {
        if (j < starting_day)
        {
            printf("   ");
            continue;
        }
        else
        {
            printf("%3d", i++);
            if (j % 7 == 0)
                printf("\n");
        }
    }

    return 0;
}

               
