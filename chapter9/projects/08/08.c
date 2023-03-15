/*
 * C programming: A Modern Approach. Chapter 09, Project 08
 * Date: March 2023
 * Description: Simulates the game of craps.  
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int roll_dice(void);
bool play_game(void);

int main(void)
{
    char ch = 'Y';
    int wins = 0,
        losses = 0;

    srand((unsigned) time(NULL));

    while(ch == 'Y' || ch == 'y')
    {
        if(play_game())
        {
            wins++;
            printf("You win!\n\n");
        }
        else
        {
            losses++;
            printf("You lose!\n\n");
        }

        printf("Play again? ");
        scanf(" %c", &ch);
    }

    printf("\nWins: %d Losses: %d\n", wins, losses);
    return 0;
}

/*
 * Returns a random integer between 2 and 12 that represents the value of 
 * rolling two dice.
 */
int roll_dice(void)
{
    return ((rand() % 6 + 1) + (rand() % 6 + 1));
}

/*
 * Returns `true` when the first `roll` of two dices is 7 or 11.
 * Returns `false` when the first `roll` is 2 or 3 or 12.
 * Otherwise each subsequent roll, is compared with the first one, called 
 * `point`. `false` is returned if 7 is rolled. `true` if the `point` is 
 * repeated.
 */
bool play_game(void)
{
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);

    if(roll == 7 || roll == 11)
    {
        return true;
    }
    else if(roll == 2 || roll == 3 || roll == 12)
    {
        return false;
    }

    int point = roll;
    printf("Your point is %hu\n", point);

    while(true)
    {
        roll = roll_dice();
        printf("You rolled: %hu\n", roll);

        if(roll == point)
        {
            return true;
        }
        if(roll == 7)
        {
            return false;
        }
    }
}
