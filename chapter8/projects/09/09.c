/*
 * C programming: A Modern Approach. Chapter 08, Project 09
 * Date: February 2023
 * Description: Random walk generator
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define SIZE  10
#define EMPTY '.'

#define STARTING_CHAR 'A'
#define ENDING_CHAR   'Z'
#define STARTING_ROW   0
#define STARTING_COL   0

#define RIGHT 0
#define UP    1
#define LEFT  2
#define DOWN  3

int main(void)
{
    char grid[SIZE][SIZE];
    bool move[4];                   // valid movements { right, up, left, down }
    int i = STARTING_ROW,
        j = STARTING_COL;           // position tracking
    char ch = STARTING_CHAR;        // character tracking

    srand((unsigned) time(NULL));

    for(int i = 0; i < SIZE; i++)   // fill the grid with dots
    {
        for(int j = 0; j < SIZE; j++)
        {
            grid[i][j] = EMPTY;
        }
    }

    grid[i][j] = ch;                // generate random walk
    while(ch <= ENDING_CHAR) 
    {
        move[RIGHT] = (j + 1 < SIZE && grid[i][j + 1] == EMPTY) ? true : false;
        move[UP]    = (i - 1 >= 0   && grid[i - 1][j] == EMPTY) ? true : false;
        move[LEFT]  = (j - 1 >= 0   && grid[i][j - 1] == EMPTY) ? true : false;
        move[DOWN]  = (i + 1 < SIZE && grid[i + 1][j] == EMPTY) ? true : false;

        if (!move[RIGHT] && !move[UP] && !move[LEFT] && !move[DOWN])
        {
            break;
        }

        while(true)
        {
            switch(rand() % 4)
                {
                    case RIGHT:
                        if(move[RIGHT])
                        {
                            grid[i][j++] = ch++;
                            break;
                        }
                        continue;
                        
                    case UP:
                        if(move[UP])
                        {
                            grid[i--][j] = ch++;
                            break;
                        }
                        continue;
                        
                    case LEFT:
                        if(move[LEFT])
                        {
                            grid[i][j--] = ch++;
                            break;
                        }
                        continue;

                    case DOWN:
                        if(move[DOWN])
                        {
                            grid[i++][j] = ch++;
                            break;
                        }
                        continue;
                }
            break;
        }
    }

    for(int i = 0; i < SIZE; i++)   // print grid
    {                               
        for(int j = 0; j < SIZE; j++)
        {
            printf(" %c ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
