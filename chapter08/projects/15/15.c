/*
 * C programming: A Modern Approach. Chapter 08, Project 15
 * Date: March 2023
 * Description: Caesar cypher implementation.
 */

#include <stdio.h>

#define SIZE 80

int main(void)
{
   char message[SIZE] = { 0 };
   int length = 0;
   char ch;
   int shift;
   
   printf("Enter message to be encrypted: ");
   while ((ch = getchar()) != '\n' && length < SIZE )
   {
       message[length] = ch;
       length++;
   }

   printf("Enter shift amount (1-25): ");
   scanf("%d", &shift);

   printf("Encrypted message: ");
   for (int i = 0; i < length; i++)
   {
      if (message[i] >= 'A' && message[i] <= 'Z')
      {
          message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
      }
      if (message[i] >= 'a' && message[i] <= 'z')
      {
          message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
      }
      putchar(message[i]);
   }

   return 0;
}
