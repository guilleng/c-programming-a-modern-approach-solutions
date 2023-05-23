/*
 * C programming: A Modern Approach. Chapter 21, Project 01
 * Date: May 2023
 * Description: Observing structure padding  
 */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

struct s {
	char a;
	int b[2];
	float c;
};

int main(void)
{
    printf("sizeof struct s     %ld\n\n", sizeof(struct s));
    printf("sizeof char         %2ld\n", sizeof(char));
    printf("       int[2]       %2ld\n", sizeof(int[2]));
    printf("       char         %2ld\n", sizeof(char));
    printf("       float        %2ld\n", sizeof(float));
    printf("sum of members      %ld\n\n", 
            sizeof(char) + sizeof(int[2]) + sizeof(char) + sizeof(float));
    printf("offsetof a (char)   %2ld\n"
           "         b (int[2]) %2ld\n"
           "         c (float)  %2ld\n", 
           offsetof(struct s, a), offsetof(struct s, b), offsetof(struct s, c));

    exit(EXIT_SUCCESS);
}
