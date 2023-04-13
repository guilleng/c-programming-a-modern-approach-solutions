/*
 * C programming: A Modern Approach. Chapter 13, Project 13
 * Date: April 2023
 * Description: Caesar cypher implementation.
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 1024

void encrypt(char *message, int shift);
int only_printable(char *str);
int read_line(char str[], int n);

int main(void)
{
   char message[SIZE+1] = { 0 },
        shift_amount[3] = { 0 };
   int shift;
   
   printf("Enter message to be encrypted: ");
   read_line(message, SIZE);

   do {
       printf("Enter shift amount (1-25): ");
       read_line(shift_amount, 2);
       shift = atoi(shift_amount);
   } while (shift < 1 || shift > 25);

   encrypt(message, shift);
   puts(message);

   exit(EXIT_SUCCESS);
}

void encrypt(char *message, int shift)
{
    while(*message)
    {
        if(*message >= 'A' && *message <= 'Z')
        {
          *message = (*message - 'A' + shift) % 26 + 'A';
        }
        if(*message >= 'a' && *message <= 'z')
        {
          *message = (*message - 'a' + shift) % 26 + 'a';
        }
        message++;
    }

    return;
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
