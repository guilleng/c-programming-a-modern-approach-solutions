/*
 * C programming: A Modern Approach. Chapter 09, Project 02
 * Date: March 2023
 * Description: Calculates and displays income tax due.
 */

#include <stdio.h>

float compute_income_tax(float taxable_income);

int main(void)
{
    float income;

    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    printf("Tax due $%.2f", compute_income_tax(income));
    return 0;
}

float compute_income_tax(float taxable_income)
{
    if (taxable_income <= 750.0f)
    {
        return .01f * taxable_income;
    }
    else if (taxable_income <= 2250.0f)
    {
        return 7.5f + .02f * (taxable_income - 750.0f);
    }
    else if (taxable_income <= 3750.0f)
    {
        return 37.5f + .03f * (taxable_income - 2250.0f);
    }
    else if (taxable_income <= 5250.0f)
    {
        return 82.5f + .04f * (taxable_income - 3750.0f);
    }
    else if (taxable_income <= 7000.0f)
    {
        return 142.5f + .05f * (taxable_income - 5250.0f);
    }
    else
    {
        return 230.0f + .06f * (taxable_income - 7000.0f);
    }
}
