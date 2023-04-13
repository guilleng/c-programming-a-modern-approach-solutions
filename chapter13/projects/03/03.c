/*
 * C programming: A Modern Approach. Chapter 13, Project 03
 * Date: April 2023
 * Description: Deals a random hands of cards.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int read_line(char str[], int n);

int main(void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = { false };
    int num_cards, rank, suit;
    const char *rank_code[] = { "Deuce", "Trey", "Four", "Five", "Six", "Seven",
                                "Eight", "Nine", "Ten", "Jack", "King", "Queen",
                                "Ace" };
    const char *suit_code[] = { "clubs", "diamonds", "hearts", "spades" };

    char buffer[2+1];

    srand((unsigned) time(NULL));

    do {
        printf("Enter number of cards in hand: ");
        read_line(buffer, 2);
        num_cards = atoi(buffer);
    } while (num_cards < 1 || num_cards > NUM_RANKS*NUM_SUITS);
    
    puts("Your hand:");
    while (num_cards > 0)
    {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank])
        {
            in_hand[suit][rank] = true;
            num_cards--;
            printf("%s of %s\n", rank_code[rank], suit_code[suit]);
        }
    }

    exit(EXIT_SUCCESS);
}

/*
 * Reads up to `n` characters or until a newline. Skips leading withe spaces. 
 * The characters are stored in `str`, with a null terminator at the end. 
 * Returns the number of characters stored when successful. 
 * Returns -1 if `n` is exceeded leaving `str` empty.
 */
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i == 0 && isspace(ch))
        {
            /* skip withe spaces */;
        }
        else if (i < n)
        {
            str[i++] = ch;
        }
        else
        {
            while ((ch = getchar()) != '\n')
            {
                /* discard rest of input */;
            }
            str[0] = '\0';
            return -1;
        }
    }
    str[i] = '\0';
    return i;
}
