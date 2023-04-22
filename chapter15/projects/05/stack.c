#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"
#define STACK_SIZE 64

int contents[STACK_SIZE] = { 0 };
int top = 0;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int item)
{
    if (is_full())
    {
        fprintf(stderr, "stack overflow item: %d\n", item);
        exit(EXIT_FAILURE);
    }
    else
    {
        contents[top++] = item;
    }
}

int pop(void)
{
    if (is_empty())
    {
        fprintf(stderr, "stack underflow\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        return contents[--top];
    }
}
