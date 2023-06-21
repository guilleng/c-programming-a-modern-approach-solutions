/*
 * C programming: A Modern Approach. Chapter 26, Project 01
 * Date: June 2023
 * Description: Generating pseudo-random numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for (i = 1; i < 1001; i++)
    {
        printf("%d", 0x01 & rand());
        if (i % 50 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    exit(EXIT_SUCCESS);
}
