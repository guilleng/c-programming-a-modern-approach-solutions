/*
 * C programming: A Modern Approach. Chapter 09, Project 05
 * Date: March 2023
 * Description: Prints a magic square of specified size
 */

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
//                            ^~~~~
//                            |
//              Requested type results in overflow conditions for n > 11

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

    char square[n][n];
// ^~~~~
// |
// Requested type results in overflow conditions for n > 11

    create_magic_square(n, square);
    print_magic_square(n, square);

    return 0;
}

/*
 * Populates in-place the 2D array `magic_square` with numbers such that the 
 * sums of the rows, columns and diagonals are all the same.
 */
void create_magic_square(int n, char magic_square[n][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            magic_square[i][j] = 0;
        }
    }

    int j = (n - 1) / 2,    // starting position
        i = 0;

    magic_square[0][j] = 1;
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

        if(magic_square[i][j] == 0)           
        {                                       // fill spot if available,
            magic_square[i][j] = curent_number;       
        }
        else
        {
            magic_square[x][y] = curent_number; // otherwise fill spot below 
            i = x;                              // and re-set position tracking
            j = y;                              // for next iteration
        }
    }
}

/*
 * Prints the `n` size 2D array `magic_square`
 */
void print_magic_square(int n, char magic_square[n][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%4d ", magic_square[i][j]);
        }
        printf("\n");
    }
}
