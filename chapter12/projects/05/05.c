/*
 * C programming: A Modern Approach. Chapter 12, Project 05
 * Date: March 2023
 * Description: Reverses the words in a sentence.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main(void)
{
    char sentence[SIZE] = { 0 }, *p = sentence, end_ch;
    int len = 0;

    printf("Enter a sentence: ");
    while ((end_ch = getchar()) != '\n' && end_ch != EOF && len < SIZE)
    {
        if (end_ch == '.' || end_ch == '?' || end_ch == '!')
        {
            break;
        }
        *p = end_ch;
        p++, len++;
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

    exit(EXIT_SUCCESS);
}
