/*
 * C programming: A Modern Approach. Chapter 06, Project 10
 * Date: February 2023
 * Description: Determines the earliest of 1+n user inputted dates.
 */

#include <stdio.h>

int main(void)
{
    int m1, m2, d1, d2, y1, y2;
    
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m1, &d1, &y1);

    while (1)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &m2, &d2, &y2);

        if (m2 == 0 && d2 == 0 && y2 == 0)
        {
            break;
        }
        else
        {
            if (y2 < y1)
            {
                m1 = m2; d1 = d2; y1 = y2; 
                continue;
            }
            else if (y1 == y2 && m2 < m1)
            {
                m1 = m2; d1 = d2; y1 = y2; 
                continue;
            }
            else if (y1 == y2 && m2 == m1 && d2 < d1)
            {
                m1 = m2; d1 = d2; y1 = y2; 
                continue;
            }
            else
            {
                continue;
            }
        }
    }

    printf("%.2d/%.2d/%.2d is the earliest date\n", m1, d1, y1);
    return 0;
}
