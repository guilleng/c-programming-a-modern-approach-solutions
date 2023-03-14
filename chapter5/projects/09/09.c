/*
 * C programming: A Modern Approach. Chapter 05, Project 09
 * Date: January 2023
 * Description: Determines the older of two dates.
 */

#include <stdio.h>

int main(void)
{
    int m1, m2, d1, d2, y1, y2;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (y1 < y2)
    {
        printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
                m1, d1, y1, 
                m2, d2, y2);
    }
    else if (y2 < y1)
    {
        printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
                m2, d2, y2, 
                m1, m2, y2);
    }
    else if (m1 < m2)
    {
        printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
                m1, d1, y1, 
                m2, d2, y2);
    }
    else if (m2 < m1)
    {
        printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
                m2, d2, y2, 
                m1, m2, y2);
    }
    else if (d1 < d2)
    {
        printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
                m1, d1, y1, 
                m2, d2, y2);
    }
    else if (d2 < d1)
    {
        printf("%.2d/%.2d/%.4d is earlier than %.2d/%.2d/%.4d\n", 
                m2, d2, y2, 
                m1, m2, y2);
    }
    else
    {
        printf("They are the same date\n");
    }

    return 0;
}
