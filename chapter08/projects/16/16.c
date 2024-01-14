/*
 * C programming: A Modern Approach. Chapter 08, Project 16
 * Date: March 2023
 * Description: Tests whether two words are anagrams.
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int letter_counts[26] = { 0 };
    int flag = 1;
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n' )
    {
        if (isalpha(ch))
        {
            letter_counts[(toupper(ch)) - 'A']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n' )
    {
        if (isalpha(ch))
        {
            letter_counts[(toupper(ch)) - 'A']--;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (letter_counts[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("The words are anagrams\n");
    }
    else
    {
        printf("The words are not anagrams\n");
    }

    return 0;
}
