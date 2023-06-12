/*
 * C programming: A Modern Approach. Chapter 23, Project 05
 * Date: June 2023
 * Description: Computes the value of a deposit after n years, at an interest 
 *              rate r. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define BUF_SIZE 1024

/*
 * Returns the number of words in `s`, where a "word" is any sequence of 
 * non-white-space characters. Puts a null terminator after each word. 
 * The original string is modified.
 */
int count_words(char *s);

int main(void)
{
    char input[BUF_SIZE], *p, c;
    double deposit, rate, years, ret;

    printf("Enter starting deposit, interest rate and number of years: ");

    if (fgets(input, BUF_SIZE, stdin) == NULL)
    {
        fprintf(stderr, "Error reading input\n");
        exit(EXIT_FAILURE);
    }

    if ((count_words(input)) != 3)
    {
        fprintf(stderr, "Bad input\n");
        exit(EXIT_FAILURE);
    }

    p = input;
    if (sscanf(p, " %lf", &deposit) != 1)
    {
        fprintf(stderr, "Error, token is %s (deposit expected)\n", p);
        exit(EXIT_FAILURE);
    }
    p += strlen(p) + 1;
    
    if ((ret = sscanf(p, " %lf%c", &rate, &c)) < 1)
    {
        fprintf(stderr, "Error, token is %s (rate expected)\n", p);
        exit(EXIT_FAILURE);
    }
    if (ret == 2)
    {
        if (c != '%')
        {
            fprintf(stderr, "Error, token is %c (%% valid only)\n", c);
            exit(EXIT_FAILURE);
        }
        rate /= 100;
    }
    p += strlen(p) + 1;

    if (sscanf(p, " %lf", &years) != 1)
    {
        fprintf(stderr, "Error, token is %s (year expected)\n", input);
        exit(EXIT_FAILURE);
    }
    p += strlen(p) + 1;

    printf("%g\n", deposit * exp(rate * years));

    exit(EXIT_SUCCESS);
}

int count_words(char *s)
{
    int count;

    if (s == NULL || *s == '\0')
    {
        fprintf(stderr, "Error reading input\n");
        exit(EXIT_FAILURE);
    }

    count = strtok(s, " \t\n\v\f\r") ? 1 : 0;

    if (count)
    {
        while (strtok(NULL, " \t\n\v\f\r"))
        {
            count++;
        }
    }
    return count;
}
