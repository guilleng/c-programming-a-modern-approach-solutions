/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/*
 * C programming: A Modern Approach. Chapter 19, Project 03
 * Date: May 2023
 * Description: Test client for stack abstract data structure
 */

#include <stdio.h>
#include "stackADT.h"

int main(void)
{
    Stack s1, s2;
    int n;

    s1 = create();
    s2 = create();

    push(s1, 1);
    push(s1, 2);
    printf("Length of s1 is: %d\n", length(s1));

    n = pop(s1);
    printf("Popped %d from s1\n", n);
    push(s2, n);

    n = pop(s1);
    printf("Popped %d from s1\n", n);
    push(s2, n);

    printf("Length of s1 is: %d\n", length(s1));
    destroy(s1);
    
    while (!is_empty(s2))
    {
        printf("Popped %d from s2\n", pop(s2));
    }

    push(s2, 3);
    printf("Length of s2 is: %d\n", length(s2));
    make_empty(s2);
    printf("Length of s2 is: %d\n", length(s2));
    if (is_empty(s2))
    {
        printf("s2 is empty\n");
    }
    else
    {
        printf("s2 is not empty\n");
    }

    destroy(s2);

    return 0;
}