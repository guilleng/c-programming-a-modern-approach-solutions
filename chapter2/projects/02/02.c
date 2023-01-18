/*
* C programming: A Modern Approach. Chapter 02, project 02
* Date: January 2023
* Author: ffstlln
* Description: Computes the volume of a 10-meter radius sphere.
*/

#include <stdio.h>

int main(void)
{
    printf("Volume of the sphere is %.1f\n", 10 * 10 * 10 * (4.0f/3.0f) * (22.0f/7.0f));
    printf("When fraction is calculated with integers is %.1f\n", 10 * 10 * 10 * (4/3) * (22.0f/7.0f));
    return 0;
}
