/*
 * C programming: A Modern Approach. Chapter 13, Project 05
 * Date: April 2023
 * Description: Adds up its command-line arguments, which are assumed to be
 *              integers.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int accum = 0;
    while (argc-- > 1)
    {
        accum += atoi(argv[argc]);
    }
    printf("Total: %d", accum);

    exit(EXIT_SUCCESS);
}
