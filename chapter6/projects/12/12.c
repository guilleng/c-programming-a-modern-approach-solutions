/*
* C programming: A Modern Approach. Chapter 06, Project 12
* Date: February 2023
* Author: ffstlln
* Description: Approximates e using Taylor series using an epsilon cutoff
*/

#include <stdio.h>

int main(void)
{
    float epsilon, current_term;
    float e = 0.0f;
    int n = 1;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

	while(1)
	{
        int factorial = 1;
		for(int i = 1; i < n; i++)
        {
			factorial *= i;
        }
        current_term = 1.0f / factorial;
        if (current_term < epsilon)
        {
            break;
        }
        else
        {
            n++;
            e += current_term;
        }
	}

    printf("1 + 1/1! + 1/2! + ... + 1/n! = %g\n", e);
    printf("Number of terms : %d\n", n - 1);

    return 0;

}
