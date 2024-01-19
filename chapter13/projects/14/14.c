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
bool is_word(char *str);

int main(void)
{
    char word1[SIZE+1];
    char word2[SIZE+1];

    printf("Enter first word: ");
    read_line(word1, SIZE);

    printf("Enter first word: ");
    read_line(word2, SIZE+1);

    if (!is_word(word1) || !is_word(word2))
    {
        exit(EXIT_FAILURE);
    }
    
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
 * Tests whether `s` contains only alphabetic characters and converts it to 
 * uppercase. 
 */
bool is_word(char *s)
{
    while (*s)
    {
        *s = toupper(*s);
        if (!isalpha(*s++))
        {
            return false;
        }
    }
    return true;
}
