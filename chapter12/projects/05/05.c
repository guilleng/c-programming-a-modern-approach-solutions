/*
 * C programming: A Modern Approach. Chapter 12, Project 05
 * Date: March 2023
 * Description: Reverses the words in a sentence.
 */

#include <stdio.h>

#define SIZE 256

int main(void)
{
    char sentence[SIZE] = { 0 },
         *p = sentence,
         end_ch;

    printf("Enter a sentence: ");

    while (p < sentence + SIZE)
    {
        end_ch = getchar();
        if (end_ch == '.' || end_ch == '?' || end_ch == '!')
        {
            p--;
            break;
        }
        *p++ = end_ch;
    }

    printf("Reversal of sentence: ");
    while (p > sentence)
    {
        char *word_start = p,
             *word_end = p;

        while (*word_start != ' ' && word_start != sentence)
        {
            word_start--;
        }
        p = word_start++;

        if (p == sentence) 
        {
            word_start--;
        }

        while (word_start <= word_end)
        {
            putchar(*word_start++);
        }

        if (p != sentence) 
        {
            putchar(*p--);
        }
    }
    putchar(end_ch);

    return 0;
}
