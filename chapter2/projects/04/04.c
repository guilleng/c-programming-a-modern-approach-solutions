/*
 * C programming: A Modern Approach. Chapter 02, project 04
 * Date: January 2023
 * Description: Adds 5% tax to inputted amount.
 */

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: %.2f\n", (1 + (5.0f / 100.0f)) * amount);

    return 0;
}
