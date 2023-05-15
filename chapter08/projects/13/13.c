/*
 * C programming: A Modern Approach. Chapter 08, Project 13
 * Date: February 2023
 * Description: Contracts a first and last name string.
 */

#include <stdio.h>

int main(void)
{
    char ch, initial, last_name[20] = { 0 };
    int i = 0;

    printf("Enter a first and last name: ");

    while ( (ch = getchar()) == ' ')
    {
        /* discard all leading spaces in input */;
    }

    initial = ch;

    while ( (ch = getchar()) != ' ')
    {
        /* discard rest of name */;
    }

    while ( (ch = getchar()) == ' ')
    {
        /* discard withe spaces after first name*/;
    }

    last_name[i] = ch;
    while ( (ch = getchar()) != '\n' && i < 20)
    {
        i++;
        last_name[i] = ch;
        /* store name in array */
    }

    printf("You entered the name: ");
    i = 0;
    while(last_name[i] != '\0')
    { 
        printf("%c", last_name[i]);
        i++;
    }
    printf(", %c.\n", initial);

    return 0;
}
