/*
 * C programming: A Modern Approach. Chapter 08, Project 03
 * Date: February 2023
 * Author: ffstlln
 * Description: Test numbers for repeated digits
 */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = { false };
    long n;
    int digit;

    do {
        printf("Enter a number: ");
        scanf("%ld", &n);
        if(n == 0)
        {
            return n;                               //program termination
        }

        while(n > 0)
        {
            digit = n % 10;
            if (digit_seen[digit])
            {
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0)
        {
            printf("Repeated digit\n");
        }
        else
        {
            printf("No repeated digit\n");
        }

        for (int digit = 0; digit < 10; digit++)    //re-set array flags
        {
            digit_seen[digit] = false;
        }

    } while(true);
}
