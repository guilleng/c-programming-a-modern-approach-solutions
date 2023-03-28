/*
 * C programming: A Modern Approach. Chapter 12, exercise 04
 * Date: March 2023
 * Description: Implementation of stack using pointers.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 64

int contents[STACK_SIZE];
int *top = contents;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int item);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    return EXIT_SUCCESS;
}

void make_empty(void)
{
    *top = &contents[0];
}

bool is_empty(void)
{
    return top == &contents[0];
}

bool is_full(void)
{
    return top == &contents[STACK_SIZE];
}

void push(int item)
{
    if (is_full())
    {
        stack_overflow();
    }
    else
    {
        *top++ = item;
    }
}

int pop(void)
{
    if (is_empty())
    {
        stack_underflow();
    }
    else
    {
        return *--top;
    }
}

void stack_overflow(void)
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
}

