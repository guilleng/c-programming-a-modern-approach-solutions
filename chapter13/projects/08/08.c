/*
 * C programming: A Modern Approach. Chapter 13, Project 08
 * Date: April 2023
 * Description: Computes the score of a Scrabble word.
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_WORD 15

int compute_scrabble_value(const char *word);
int read_line(char str[], int n);
int is_word(char *s);

int main(void)
{
    char word[MAX_WORD + 1] = "";

	printf("Enter a word: ");

	if (read_line(word, MAX_WORD) != 0 && is_word(word))
    {
        printf("Scrabble value: %d\n", compute_scrabble_value(word));
    }

    exit(EXIT_SUCCESS);
}

int compute_scrabble_value(const char *word)
{
    int score = 0;
    const int scores[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 
                        /* A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q */
                           1, 1, 1, 1, 4, 4, 8, 4, 10 };
                        /* R  S  T  U  V  W  X  Y  Z */
    while(*word)
    {
        score += scores[toupper(*word++) - 'A'];
    }
    return score;
}

/*
 * Reads up to `n` characters or until a newline. Skips leading withe spaces. 
 * The characters are stored in `str`, with a null terminator at the end. 
 * Returns the number of characters stored. 
 */
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) == ' ' || ch == '\t')
    {
        ;
    }
    while (ch != '\n' && ch != EOF)
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }
    str[i] = '\0';
    
    return i;
}

/*
 * Tests whether `s` contains only alphabetic characters.
 */
int is_word(char *s)
{
    while (*s)
    {
        if (!isalpha(*s++))
        {
            return 0;
        }
    }
    return 1;
}
