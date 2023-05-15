/*
 * C programming: A Modern Approach. Chapter 06, Project 01
 * Date: February 2023
 * Description: Prints largest non-negative number entered by user.
 */

#include <stdio.h>

int main(void)
{
    float input; 
    float answer = 0.0f;

    do {
        printf("Enter a number: ");
        scanf("%f", &input);

        if (input > 0.0f && input > answer)
        {
                answer = input;
        }

    } while (input > 0.0f);

    printf("The largest number entered was %g", answer);
    return 0;
}
