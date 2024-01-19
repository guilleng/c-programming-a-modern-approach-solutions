/*
 * C programming: A Modern Approach. Chapter 13, Project 13
 * Date: April 2023
 * Description: Caesar cypher implementation.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

void encrypt(char *message, int shift);
int only_printable(char *str);
int read_line(char str[], int n);

int main(void)
{
   char message[SIZE+1] = { 0 };
   char shift_amount[4] = { 0 };
   int shift;
   
   printf("Enter message to be encrypted: ");
   read_line(message, SIZE);

   printf("Enter shift amount (1-25): ");
   read_line(shift_amount, 3);
   shift = atoi(shift_amount);

   if (shift > 0 && shift < 26)
   {
       encrypt(message, shift);
       puts(message);
   }
   else
   {
       puts("Invalid shift value");
   }

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
 * Returns the number of characters stored. 
 */
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) == ' ' || ch == '\t')
    {
        ;
    }
    while (ch != '\n' && ch != EOF)
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }
    str[i] = '\0';
    
    return i;
}
