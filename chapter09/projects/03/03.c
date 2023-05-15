/*
 * C programming: A Modern Approach. Chapter 09, Project 03
 * Date: March 2023
 * Description: Random walk generator
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define EMPTY '.'

#define STARTING_CHAR 'A'
#define ENDING_CHAR   'Z'
#define STARTING_ROW   0
#define STARTING_COL   0

#define RIGHT 0
#define UP    1
#define LEFT  2
#define DOWN  3

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
    char grid[10][10] = { 0 };

    generate_random_walk(grid);
    print_array(grid);

    return 0;
}

/*
 * Generates a random character path on the `walk` 2D array
 */
void generate_random_walk(char walk[10][10])
{
    bool move[4];                   // valid movements { right, up, left, down }
    int i = STARTING_ROW,
        j = STARTING_COL;           // position tracking
    char ch = STARTING_CHAR;        // character tracking

    srand((unsigned) time(NULL));

    for(int i = 0; i < 10; i++)     // initializes the grid 
    {
        for(int j = 0; j < 10; j++)
        {
            walk[i][j] = EMPTY;
        }
    }

    walk[i][j] = ch;                // generate random walk
    while(ch <= ENDING_CHAR) 
    {
        move[RIGHT] = (j + 1 < 10 && walk[i][j + 1] == '.') ? true : false;
        move[UP]    = (i - 1 >= 0 && walk[i - 1][j] == '.') ? true : false;
        move[LEFT]  = (j - 1 >= 0 && walk[i][j - 1] == '.') ? true : false;
        move[DOWN]  = (i + 1 < 10 && walk[i + 1][j] == '.') ? true : false;

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
                            walk[i][j++] = ch++;
                            break;
                        }
                        continue;
                        
                    case UP:
                        if(move[UP])
                        {
                            walk[i--][j] = ch++;
                            break;
                        }
                        continue;
                        
                    case LEFT:
                        if(move[LEFT])
                        {
                            walk[i][j--] = ch++;
                            break;
                        }
                        continue;

                    case DOWN:
                        if(move[DOWN])
                        {
                            walk[i++][j] = ch++;
                            break;
                        }
                        continue;
                }
            break;
        }
    }
}

/*
 * Prints the 2D array `walk`
 */
void print_array(char walk[10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf(" %c ", walk[i][j]);
        }
        printf("\n");
    }
}
