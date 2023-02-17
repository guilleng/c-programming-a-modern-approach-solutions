/*
* C programming: A Modern Approach. Chapter 07, Project 02
* Date: February 2023
* Author: ffstlln
* Description: square2.c modification that pauses every 24 squares printed
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("This program prints a table of squares,\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    getchar();                           // clears buffer

    for (int i = 1 ; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        if(i % 24 == 0)
        {
            printf("Press Enter to continue...");
            while (getchar() != '\n')
            {
                /* skip any non-newline character */;
            }
        }
    }

    return 0;
}
