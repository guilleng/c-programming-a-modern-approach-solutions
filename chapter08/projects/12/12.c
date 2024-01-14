/*
 * C programming: A Modern Approach. Chapter 08, Project 12
 * Date: February 2023
 * Description: Computes the score of a Scrabble word.
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int letter_scores[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 
                         // A  B  C  D  E  F  G  H  I  J  K  L  M
                            1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
                         // N  O  P   Q  R  S  T  U  V  W  X  Y   Z
    int word_score = 0;

    printf("Enter a word: ");

    while ((ch = toupper(getchar())) != '\n')
    {
        word_score += letter_scores[ch - 'A'];
    }

    printf("Scrabble value: %d\n", word_score);
    return 0;
}
