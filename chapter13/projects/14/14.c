/*
 * C programming: A Modern Approach. Chapter 13, Project 14
 * Date: April 2023
 * Description: Tests whether two words are anagrams.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 64

bool are_anagrams(const char *word1, const char *word2);
int read_line(char *str, int n);
bool valid_input(char *str);

int main(void)
{
    char word1[SIZE+1],
         word2[SIZE+1];

    do {
        printf("Enter first word: ");
        read_line(word1, SIZE);
    } while (!valid_input(word1));

    do {
        printf("Enter first word: ");
        read_line(word2, SIZE+1);
    } while (!valid_input(word2));

    if (are_anagrams(word1, word2))
    {
        printf("The words are anagrams\n");
    }
    else
    {
        printf("The words are not anagrams\n");
    }

    exit(EXIT_SUCCESS);
}

bool are_anagrams(const char *word1, const char *word2)
{
    int letter_counts[26] = { 0 };

    while (*word1)
    {
        letter_counts[*word1++ - 'A']++;
    }
    while (*word2)
    {
        letter_counts[*word2++ - 'A']--;
    }

    for(int i = 0; i < 26; i++)
    {
        if (letter_counts[i] != 0)
        {
            return false;
        }
    }
    return true;
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

/* 
 * Returns true if the string `str` contains only alphabetic ASCII characters.
 * The string is converted to uppercase.
 */
bool valid_input(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        if (!isalpha(*str++))
        {
            return false;
        }
    }

    return true;
}
