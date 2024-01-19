/*
 * C programming: A Modern Approach. Chapter 13, Project 07
 * Date: April 2023
* Description: Displays as text a two-digit number.
 */

#include <stdio.h>
#include <stdlib.h>

int read_line(char str[], int n);

int main(void)
{
    int n;
    char buffer[2+1] = "";
    const char *units[] = { "-one.", "-two.", "-three.", "-four.", "-five.", 
                            "-six.", "-seven.", "-eight.", "-nine." };

    const char *teens[] = { "ten.", "eleven.", "twelve.", "thirteen.", 
                            "fourteen.", "fifteen.", "sixteen.", "seventeen.", 
                            "eighteen.", "nineteen." };

    const char *tens[]  = { "twenty", "thirty", "forty", "fifty", "sixty", 
                            "seventy", "eighty", "ninety" };


    do {
        printf("Enter a two-digit positive integer: ");
        read_line(buffer, 2);
        n = atoi(buffer);
    } while (n < 10 || n > 99);

    printf("You entered the number ");
    if (n / 10 == 1)
    {
        printf("%s\n", teens[n % 10]);
        exit(EXIT_SUCCESS);
    }

    if (n % 10 == 0)
    {
        printf("%s.", tens[n / 10 - 2]);
    }
    else
    {
        printf("%s%s\n", tens[n / 10 - 2], units[n % 10 - 1]);
    }

    exit(EXIT_SUCCESS);
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
