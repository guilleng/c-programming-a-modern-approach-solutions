/*
 * C programming: A Modern Approach. Chapter 09, Project 03
 * Date: March 2023
 * Author: ffstlln
 * Description: Random walk generator
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

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

void generate_random_walk(char walk[10][10])
{

    srand((unsigned) time(NULL));

    for(int i = 0; i < 10; i++)   // fill the grid with dots
    {
        for(int j = 0; j < 10; j++)
        {
            walk[i][j] = '.';
        }
    }

    char ch = 'A';              // current character
    bool move[4];               // valid movements { right, up, left, down }
    int i = 0,                  // current position tracking
        j = 0;

    walk[i][j] = ch;
    while(ch <'Z') 
    {
        move[RIGHT] = (j + 1 < 10 && walk[i][j + 1] == '.') ? true : false;
        move[UP]    = (i - 1 >= 0 && walk[i - 1][j] == '.') ? true : false;
        move[LEFT]  = (j - 1 >= 0 && walk[i][j - 1] == '.') ? true : false;
        move[DOWN]  = (i + 1 < 10 && walk[i + 1][j] == '.') ? true : false;

        if (!move[RIGHT] && !move[UP] && !move[LEFT] && !move[DOWN])
        {
            break;
        }

        switch(rand() % 4) 
        {					
            case RIGHT:
                if(move[RIGHT])
                {
                    ch++, j++;
                    walk[i][j] = ch;
                    break;
                }
			/* marker comments suppress fall-through warnings in GCC */
			/* fall through */
            case UP:
                if(move[UP])
                {
                    ch++, i--;
                    walk[i][j] = ch;
                    break;
                }
			/* fall through */
            case LEFT:
                if(move[LEFT])
                {
                    ch++, j--;
                    walk[i][j] = ch;
                    break;
                }
			/* fall through */
            case DOWN:
                if(move[DOWN])
                {
                    ch++, i++;
                    walk[i][j] = ch;
                    break;
                }
            default:
                break;
        }
    }
}

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
