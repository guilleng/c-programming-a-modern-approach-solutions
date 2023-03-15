/*
 * C programming: A Modern Approach. Chapter 08, Project 01
 * Date: February 2023
 * Description: Checks a positive number for repeated digits and displays them.  
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = { false },
         digit_seen_twice[10] = { false };
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_seen_twice[digit] = digit_seen[digit] ? true : false;
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for(int i = 0; i < 10; i++)
    {
        if (digit_seen_twice[i])
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
