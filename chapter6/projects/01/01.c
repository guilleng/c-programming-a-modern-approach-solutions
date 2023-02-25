/*
 * C programming: A Modern Approach. Chapter 06, Project 01
 * Date: February 2023
 * Author: ffstlln
 * Description: Prints largest non-negative number entered by user.
 */

#include <stdio.h>

int main(void)
{
    float input; 
    float answer = 0;

    do {
        printf("Enter a number: ");
        scanf("%f", &input);

        if (input > 0 && input > answer)
        {
                answer = input;
        }

    } while (input > 0);

    printf("The largest number entered was %g", answer);
    return 0;
}
