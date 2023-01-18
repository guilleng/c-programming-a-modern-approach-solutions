/*
* C programming: A Modern Approach. Chapter 02, Project 03
* Date: January 2023
* Author: ffstlln
* Description: Computes the volume of a sphere.
*/

#include <stdio.h>

int main(void)
{
    float radius;

    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);
    printf("Volume of the sphere is %.1f\n", radius * radius * radius * (4.0f/3.0f) * (22.0f/7.0f));
    return 0;
}
