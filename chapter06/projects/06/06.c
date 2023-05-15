/*
* C programming: A Modern Approach. Chapter 06, Project 06
* Date: February 2023
* Description: Prints all even squares up to an user inputted number.
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; (i * i) <= n; i++)
    {
        if( (i * i) % 2 == 0 )
        {
            printf("\n%d", i * i);
        }
    }

    return 0;
}
