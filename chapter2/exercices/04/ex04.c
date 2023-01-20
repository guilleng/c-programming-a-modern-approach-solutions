/*
* C programming: A Modern Approach. Chapter 02, exercise 04
* Date: January 2023
* Author: ffstlln
* Description: Declaring variables without initializing and observing behavior
*/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    float x, y, z;

    printf("non-initialized integers:\n%d\n%d\n%d\n", a, b, c);
    printf("non-initialized floats:\n%f\n%f\n%f\n", x, y, z);

    return 0;
}
