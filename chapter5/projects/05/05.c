/*
 * C programming: A Modern Approach. Chapter 05, Project 05
 * Date: January 2023
 * Author: ffstlln
 * Description: Calculates and displays income tax due.
 */

#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    if (income <= 750.0f)
    {
        tax = .01f * income;
    }
    else if (income <= 2250.0f)
    {
        tax = 7.5f + .02f * (income - 750.0f);
    }
    else if (income <= 3750.0f)
    {
        tax = 37.5f + .03f * (income - 2250.0f);
    }
    else if (income <= 5250.0f)
    {
        tax = 82.5f + .04f * (income - 3750.0f);
    }
    else if (income <= 7000.0f)
    {
        tax = 142.5f + .05f * (income - 5250.0f);
    }
    else
    {
        tax = 230.0f + .06f * (income - 7000.0f);
    }

    printf("Tax due $%.2f", tax);
    return 0;
}
