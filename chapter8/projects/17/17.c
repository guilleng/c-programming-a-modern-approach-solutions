/*
 * C programming: A Modern Approach. Chapter 08, Project 17
 * Date: March 2023
 * Author: ffstlln
 * Description: Prints a magic square of specified size
 */

#include <stdio.h>

int main(void)
{
    int n;
    
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    if ( (n % 2) == 0 || (n > 100) )
    {
        return 1;
    }

    int square[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            square[i][j] = 0;
        }
    }

    int j = (n - 1) / 2,    // starting position
        i = 0;

    square[0][j] = 1;
    for(int curent_number = 2; curent_number <= (n * n); curent_number++)
    {
        int x = (i + 1),    // temporarily store position below
            y = j;

        i--;
        if(i < 0)           // move 'up', if out of bound then 'wrap around'
        {
            i = (n - 1);
        }

        j++;
        if(j > (n - 1))     // move 'right', if out of bound then 'wrap around'
        {
            j = 0;
        }

        if(square[i][j] == 0)           
        {                                   // fill if available spot,  
            square[i][j] = curent_number;       
        }
        else
        {
            square[x][y] = curent_number;   // otherwise fill spot below 
            i = x;                          // and re-set position tracking for
            j = y;                          // next iteration
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%4d ",square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
