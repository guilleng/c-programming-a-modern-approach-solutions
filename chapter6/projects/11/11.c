/*
 * C programming: A Modern Approach. Chapter 06, Project 11
 * Date: February 2023
 * Author: ffstlln
 * Description: Calculates the nth approximation of Euler's number using Taylor 
 *              series.
 */

#include <stdio.h>

int main(void)
{
    float e = 1.0f;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

	while(n > 0)
	{
        int factorial = 1;
		for(int i = 1; i <= n ; i++)
        {
			factorial *= i;
        }
		e += 1.0f / factorial;
		n--;
	}

    printf("1 + 1/1! + 1/2! + ... + 1/n! = %g\n", e);
    return 0;
}
