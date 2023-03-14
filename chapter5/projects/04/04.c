/*
 * C programming: A Modern Approach. Chapter 05, Project 04
 * Date: January 2023
 * Description: Displays the Beaufort wind force scale description for an user 
 *              inputted wind speed. 
 */

#include <stdio.h>

int main(void)
{
    float wind_speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%f", &wind_speed);

    if (wind_speed <= 1.0f)
    {
        printf("Calm\n");
    }
    else if (wind_speed <= 3.0f)
    {
        printf("Light air\n");
    }
    else if (wind_speed <= 27.0f)
    {
        printf("Breeze\n");
    }
    else if (wind_speed <= 47.0f)
    {
        printf("Gale\n");
    }
    else if (wind_speed <= 63.0f)
    {
        printf("Storm\n");
    }
    else 
    {
        printf("Hurricane\n");
    }

    return 0;
}
