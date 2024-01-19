
/*
 * C programming: A Modern Approach. Chapter 13, Project 12
 * Date: April 2023
 * Description: Reverses the words in a sentence. 
 */

#include <stdio.h>
#include <stdlib.h>

#define SENT_LENGTH 30
#define WORD_LENGTH 20

char *read_word(char str[], int n);

int main(void)
{
    char sentence[SENT_LENGTH][WORD_LENGTH+1], final_ch = '\0', *ch;

    int word_count = 0;

    printf("Enter a sentence: ");
    while(word_count < SENT_LENGTH && !final_ch)
    {
        ch = read_word(sentence[word_count++], WORD_LENGTH);

        while(*ch++);
        ch -= 2;

        switch (*ch)
        {
            case '.': case '!': case '?':
                final_ch = *ch;
                *ch = '\0';
                break;
            default:
                break;
        }
    }

    printf("Reversal of sentence: ");
    while (word_count-- != 0)
    {
        printf("%s", sentence[word_count]);
        if (word_count > 0) 
        {
            printf(" ");
        }
    }
    putchar(final_ch);

    exit(EXIT_SUCCESS);
}

/*
 * Reads a word from `stdin` discarding leading withe spaces and tabs.
 * Returns a pointer to the string read.
 */
char *read_word(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) == ' ' && ch != '\t')
    {
        ;
    }
    while (ch != ' ' && ch != '\t' && ch != '\n' && ch != EOF)
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }
    str[i] = '\0';
    
    return str;
}
