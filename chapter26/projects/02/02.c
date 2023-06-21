/*
 * C programming: A Modern Approach. Chapter 26, Project 02
 * Date: June 2023
 * Description: Testing the atexit function
 */

#include <stdio.h>
#include <stdlib.h>

void thatsall(void)
{
    printf("That's all, ");
}

void folks(void)
{
    printf("folks!\n");
}

int main()
{
    atexit(folks);
    atexit(thatsall);
    exit(EXIT_SUCCESS);
}
