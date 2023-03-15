/*
 * C programming: A Modern Approach. Chapter 07, Project 12
 * Date: February 2023
 * Description: Evaluates a basic arithmetic expression.
 */

#include <stdio.h>

int main(void)
{
    float number, accumulator;
    char operand;

    printf("Enter an expression: ");
    scanf("%f", &accumulator);

    while ( (operand = getchar()) != '\n' )
    {
        scanf("%f", &number);
        switch (operand)
        {
            case '+':
                accumulator += number;
                break;
            case '-':
                accumulator -= number;
                break;
            case '*':
                accumulator *= number;
                break;
            case '/':
                accumulator /= number;
                break;
            default:
                break;
        }
    }

    printf("Value of expression: %g\n", accumulator);
    return 0;
}
