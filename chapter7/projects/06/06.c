/*
* C programming: A Modern Approach. Chapter 07, Project 06
* Date: February 2023
* Author: ffstlln
* Description: prints the sizes in bytes (and bits) of different data types
*/

#include <stdio.h>

int main(void)
{
    printf("int         %2lu bytes (%3lu-bit)\n", 
            sizeof(int), sizeof(int) * 8);

    printf("short       %2lu bytes (%3lu-bit)\n",
            sizeof(short), sizeof(short) * 8);

    printf("long        %2lu bytes (%3lu-bit)\n",
            sizeof(long), sizeof(long) * 8);

    printf("float       %2lu bytes (%3lu-bit)\n",
            sizeof(float), sizeof(float) * 8);

    printf("double      %2lu bytes (%3lu-bit)\n",
            sizeof(double), sizeof(double) * 8);

    printf("long double %2lu bytes (%3lu-bit)\n",
            sizeof(long double), sizeof(long double) * 8);

    return 0;
}
