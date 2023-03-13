/*
 * C programming: A Modern Approach. Chapter 02, project 02
 * Date: January 2023
 * Author: ffstlln
 * Description: Computes the volume of a 10-meter radius sphere using both 
 *              floating point and integral division.
 */

#include <stdio.h>

#define PI (22.0f / 7.0f)

int main(void)
{
    printf("Volume of the sphere is %.1f\n", 
            10 * 10 * 10 * (4.0f/3.0f) * PI);
    printf("When fraction is computed using integers is %.1f\n", 
            10 * 10 * 10 * (4/3) * PI);
    return 0;
}
