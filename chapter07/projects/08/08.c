/*
 * C programming: A Modern Approach. Chapter 07, Project 08
 * Date: February 2023
 * Description: Displays possible flight time based on inputted time.
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int hh, mm, user_input,
        departure1 =  8 * 60 +  0,
        departure2 =  9 * 60 + 43,
        departure3 = 11 * 60 + 19,
        departure4 = 12 * 60 + 47,
        departure5 = 14 * 60 +  0,
        departure6 = 15 * 60 + 45,
        departure7 = 19 * 60 +  0,
        departure8 = 21 * 60 + 45;

    printf("Enter a time in the HH:MM AM/PM: ");
    scanf("%d :%d %c", &hh, &mm, &ch);

    if ( (toupper(ch) == 'P' ) )
    {
            hh += 12;
    }

    user_input = hh * 60 + mm;

    if (user_input <= departure1 + (departure2 - departure1) / 2)
    {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (user_input < departure2 + (departure3 - departure2) / 2)
    {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (user_input < departure3 + (departure4 - departure3) / 2)
    {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (user_input < departure4 + (departure5 - departure4) / 2)
    {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (user_input < departure5 + (departure6 - departure5) / 2)
    {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (user_input < departure6 + (departure7 - departure6) / 2)
    {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (user_input < departure7 + (departure8 - departure7) / 2)
    {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else
    {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}
