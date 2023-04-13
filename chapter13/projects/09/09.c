/*
 * C programming: A Modern Approach. Chapter 13, Project 09
 * Date: April 2023
 * Description: Counts the number of vowels in a sentence.
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 1024

int compute_vowel_count(const char *sentence);
int read_line(char str[], int n);

int main(void)
{
    char sentence[SIZE + 1] = "";
    
    printf("Enter a sentence: ");
    read_line(sentence, SIZE);
    
    printf("Your sentence contains %d vowels.\n", 
            compute_vowel_count(sentence));

    exit(EXIT_SUCCESS);
}

int compute_vowel_count(const char *sentence)
{
    int count = 0;
    while (*sentence)
    {
        switch (toupper(*sentence++))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++;
                break;
            default:
                break;
        }
    }
    return count;
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
