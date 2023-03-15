/*
 * C programming: A Modern Approach. Chapter 08, Project 16
 * Date: March 2023
 * Description: Tests whether two words are anagrams.
 */

#include <stdio.h>
#include <ctype.h>

#define TRUE 'T'

int main(void)
{
    int letter_counts[26] = { 0 };
    char ch;

    printf("Enter first word: ");
    while( (ch = getchar()) != '\n' )
    {
        if(isalpha(ch))
        {
            letter_counts[(toupper(ch)) - 'A']++;
        }
    }

    printf("Enter second word: ");
    while( (ch = getchar()) != '\n' )
    {
        if(isalpha(ch))
        {
            letter_counts[(toupper(ch)) - 'A']--;
        }
    }

    ch = TRUE;                               //using char variable as flag
    for(int i = 0; i < 26; i++)
    {
        if (letter_counts[i] != 0)
        {
            ch++; 
            break;
        }
    }

    if (ch == TRUE)
    {
        printf("The words are anagrams\n");
    }
    else
    {
        printf("The words are not anagrams\n");
    }
    return 0;
}
