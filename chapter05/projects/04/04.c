/*
 * C programming: A Modern Approach. Chapter 05, Project 04
 * Date: January 2023
 * Description: Displays the Beaufort wind force scale description for an user 
 *              inputted wind speed. 
 */

#include <stdio.h>

int main(void)
{
    int wind_speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%d", &wind_speed);

    if (wind_speed < 1)
    {
        printf("Calm\n");
    }
    else if (wind_speed < 4)
    {
        printf("Light air\n");
    }
    else if (wind_speed < 28)
    {
        printf("Breeze\n");
    }
    else if (wind_speed < 48)
    {
        printf("Gale\n");
    }
    else if (wind_speed < 64)
    {
        printf("Storm\n");
    }
    else 
    {
        printf("Hurricane\n");
    }

    return 0;
}
