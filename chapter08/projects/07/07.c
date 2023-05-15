/*
 * C programming: A Modern Approach. Chapter 08, Project 07
 * Date: February 2023
 * Description: Reads a 5x5 array of ints and prints the row and column sums.  
 */

#include <stdio.h>

int main(void)
{
    int matrix[5][5] = { 0 },
        accum = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Row totals: ");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            accum += matrix[i][j];
        }
        printf("%d ", accum);
        accum = 0;
    }

    printf("\nColumn totals: ");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            accum += matrix[j][i];
        }
        printf("%d ", accum);
        accum = 0;
    }

    return 0;
}
