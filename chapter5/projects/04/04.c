/*
 * C programming: A Modern Approach. Chapter 05, Project 04
 * Date: January 2023
 * Author: ffstlln
 * Description: Displays description of wind speed according to the Beaufort 
 *              scale.
 */

#include<stdio.h>

int main (void)
{
    float wind_speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%f", &wind_speed);

    if (wind_speed <= 1)
    {
        printf("Calm");
    }
    else if (wind_speed <= 3)
    {
        printf("Light air");
    }
    else if (wind_speed <= 27)
    {
        printf("Breeze");
    }
    else if (wind_speed <= 47)
    {
        printf("Gale");
    }
    else if (wind_speed <= 63)
    {
        printf("Storm");
    }
    else 
    {
        printf("Hurricane");
    }

    return 0;
}
