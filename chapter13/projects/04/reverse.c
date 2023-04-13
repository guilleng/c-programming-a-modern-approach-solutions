/*
 * C programming: A Modern Approach. Chapter 13, Project 04
 * Date: April 2023
 * Description: Echoes command line arguments in reverse order.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    while (argc-- > 1)
    {
        printf("%s ", argv[argc]);
    }
    exit(EXIT_SUCCESS);
}
