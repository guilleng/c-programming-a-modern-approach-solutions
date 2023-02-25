/*
 * C programming: A Modern Approach. Chapter 07, Project 13
 * Date: February 2023
 * Author: ffstlln
 * Description: Calculates the average word length in a sentence. 
 */

#include <stdio.h>

int main(void)
{
   unsigned short total_chars = 0, word_count = 0;
   char ch;

   printf("Enter a sentence: ");

   while(1)
   {
       ch = getchar();
       if( ch == ' ' )
       {
           word_count++;
       }
       else if (ch != '\n')
       {
           total_chars++;
       }
       else
       {
           word_count++;                // count the last word
           break;
       }
   }

   printf("Average word length: %.1f\n", (double) total_chars / word_count);
   return 0;
}
