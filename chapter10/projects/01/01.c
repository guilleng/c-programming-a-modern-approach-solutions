/*
 * C programming: A Modern Approach. Chapter 10, Project 01
 * Date: March 2023
 * Description: Checks a series of matching parentheses using a stack.  
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 32

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int item);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

bool match(char left, char right);

int main(void)
{
    char input;
    printf("Enter parentheses and/or braces: ");

    while ((input = getchar()) != '\n')
    {
        if (input == '(' || input == '[' || input == '{')
        {
            push(input);
        }

        if (input == ')' || input == ']' || input == '}')
        {
        // pop() only gets called AFTER is_empty() returns false avoiding a 
        // valid input such as ")" or "()]" causing a stack underflow
            if (is_empty() || !match(pop(), input))
            {
                printf("Parentheses/braces are NOT nested properly\n");
                exit(EXIT_SUCCESS);
            }
        }
    }

    if (is_empty()) 
    {
        printf("Parentheses/braces are nested properly\n");
    }
    else
    {
        printf("Parentheses/braces are NOT nested properly\n");
    }

    exit(EXIT_SUCCESS);
}

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
        stack_overflow();
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
        stack_underflow();
        return 1;
    }
    else
    {
        return contents[--top];
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

/*
 * Returns true if the `left` parentheses/braces matches the `right` one.
 */
bool match(char left, char right)
{
    switch (right - left)
    {
        case 1: case 2: case 3:
            return true;
        default:
            return false;
    }
}
        
