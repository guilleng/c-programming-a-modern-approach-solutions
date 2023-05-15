/*
 * C programming: A Modern Approach. Chapter 07, Project 10
 * Date: February 2023
 * Description: Counts the number of vowels in a sentence.
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int count = 0;
    
    printf("Enter a sentence: ");
    
    do {
        switch ( ch = toupper(getchar()) )
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++;
                break;
            default:
                break;
        }
    } while (ch != '\n');
    
    printf("Your sentence contains %d vowels.\n", count);
    return 0;
}
