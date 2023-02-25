/*
 * C programming: A Modern Approach. Chapter 07, Project 07
 * Date: February 2023
 * Author: ffstlln
 * Description: Performs basic fraction arithmetic.
 */

#include <stdio.h>

int main(void)
{
    int num1, dnm1, num2, dnm2, num_result, dnm_result;
    char op;

    printf("Enter two fractions separated by an operator (+, -, * or /): ");
    scanf("%d / %d %c %d / %d", &num1, &dnm1, &op, &num2, &dnm2);
    
    switch(op)
    {
        case '+':
            num_result = num1 * dnm2 + num2 * dnm1;
            dnm_result = dnm1 * dnm2;
            break;
        case '-':
            num_result = num1 * dnm2 - num2 * dnm1;
            dnm_result = dnm1 * dnm2;
            break;
        case '*':
            num_result = num1 * num2;
            dnm_result = dnm1 * dnm2;
            break;
        case '/':
            num_result = num1 * dnm2;
            dnm_result = dnm1 * num2;
            break;
        default:
            return 1;                   // bad input
    }

    if (dnm_result == 0)
    {
        return 2;                       // denominator is zero
    }
    else if (num_result == 0)
    {
        printf("0\n");                  // numerator is zero
        return 0;   
    }
    else
    { 
        int gcd, n, m;

        n = num_result;
        m = dnm_result;

        while(1)
        {
            if (n == 0)
            {
                gcd = m;
                break;
            }
            int remainder;
            remainder = m % n;
            m = n;
            n = remainder;
        }

        num_result /= gcd;
        dnm_result /= gcd;

        if (dnm_result == 1)
        {
            printf("%d", num_result);   // non-fraction result
            return 0;
        }
        else
        {
            printf("%d/%d\n", num_result, dnm_result);
            return 0;
        }
    }
}
