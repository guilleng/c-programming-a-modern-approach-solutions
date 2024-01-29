/*
 * C programming: A Modern Approach. Chapter 22, Project 14
 * Date: June 2023
 * Description: Caesar cypher implementation.
 */

#include "x_readline.h"

#define BUF_LEN 255
#define EXTENSION ".enc"

int main(void)
{
    char output_filename[BUF_LEN] = { 0 };
    char input_buffer[BUF_LEN]; 
    FILE *fp, *fp_out;
    int shift = 0;

    printf("Enter name of the file to be encrypted: ");
    x_readline(input_buffer, BUF_LEN);

    if ((fp = fopen(input_buffer, "r+b")) == NULL)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    if (strlen(input_buffer) + strlen(EXTENSION) > BUF_LEN)
    {
        input_buffer[BUF_LEN - strlen(EXTENSION) - 1] = '\0';
    }

    strcat(output_filename, input_buffer);
    strcat(output_filename, EXTENSION);

    fp_out = fopen(output_filename, "w+b");

    if (fp_out == NULL)
    {
       perror("Error");
       exit(EXIT_FAILURE);
    }

    printf("Enter shift amount (1-25): ");
    x_readline(input_buffer, BUF_LEN);

    if (sscanf(input_buffer, " %d", &shift) != 1)
    {
       fprintf(stderr, "Error: Invalid input\n");
    }
    else
    {
       if (shift < 1 || shift > 25)
       { 
           fprintf(stderr, "Error: Invalid input\n");
       }
       else
       {
           int ch;
           while ((ch = fgetc(fp)) != EOF)
           {
              if (ferror(fp))
              {
                  break;
              }

              if(ch >= 'A' && ch <= 'Z')
              {
                  ch = ((ch - 'A') + shift) % 26 + 'A';
              }
              if(ch >= 'a' && ch <= 'z')
              {
                  ch = ((ch - 'a') + shift) % 26 + 'a';
              }
              fputc(ch, fp_out);

              if (ferror(fp_out))
              {
                  break;
              }
           }
       }
    }

    if (fclose(fp) == EOF)
    {
        perror("Error");
    }
    if (fclose(fp_out) == EOF)
    {
        perror("Error");
    }

    exit(EXIT_SUCCESS);
}
