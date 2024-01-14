/*
 * C programming: A Modern Approach. Chapter 08, Project 14
 * Date: March 2023
 * Description: Reverses the words in a sentence. 
 */

#include <stdio.h>

#define SIZE 256

int main(void)
{
    char sentence[SIZE] = { 0 },
         end_ch;

    printf("Enter a sentence: ");

    int i = 0;
    while (i < SIZE)
    {
        end_ch = getchar();
        if (end_ch == '.' || end_ch == '?' || end_ch == '!')
        {
            break;
        }
        sentence[i] = end_ch;
        i++;
    }

    printf("Reversal of sentence: ");
    while (i >= 0)
    {
        int word_final = --i;
        while (sentence[i] != ' ' && (i >= 0))
        {                   // tracking backwards the word beginning character
            i--;
        }

        int j = ( i == 0 ? 0 : i + 1 );
        while (j <= word_final)
        {                   // print word
            putchar(sentence[j]);
            j++;
        }
        if (i > 0)
        {
            putchar(' ');
        }
    }
    putchar(end_ch);
    putchar('\n');

    return 0;
}
