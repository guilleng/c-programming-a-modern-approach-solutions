/*
 * C programming: A Modern Approach. Chapter 08, Project 06
 * Date: February 2023
 * Description: Translates a message to B1FF-speak.
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 64

int main(void)
{
    char message[SIZE] = { 0 },
         ch;
    int i = 0;

    printf("Enter message: ");
    while( (ch = toupper(getchar())) != '\n' && i < SIZE )
    {
        message[i] = ch;
        i++;
    }

    printf("In B1FF-speak: ");
    for (i = 0; i < SIZE; i++)
    {
        switch(message[i])
        {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(message[i]);
                break;
        }
    }
    printf("!!!!!!!!!\n");

    return 0;
}
