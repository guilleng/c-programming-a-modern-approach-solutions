/*
 * C programming: A Modern Approach. Chapter 10, Project 06
 * Date: March 2023
 * Description: Evaluates Reverse Polish Notation addition subtraction, 
 *              multiplication and division of single digit integer operands 
 *              using a stack.  
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

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

int main(void)
{
    char input;

    printf("Enter an RPN expression: ");
    while (true)
    {
        int operand;
        scanf(" %c", &input);

        if (isdigit(input))
        {
            push(input - '0');
            continue;
        }

        switch(input)
        {
            case '+':
                push(pop() + pop());
                break;
            case '-':
                operand = pop();
                push(pop() - operand);
                break;
            case '*':
                push(pop() * pop());
                break;
            case '/':
                operand = pop();
                push(pop() / operand);
                break;
            case '=':
                printf("Value of expression: %d\n", pop());
                make_empty();
                printf("Enter an RPN expression: ");
                break;
            default:
                exit(EXIT_SUCCESS);
        }
    }
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
    }
    else
    {
        return contents[--top];
    }
}

void stack_overflow(void)
{
    printf("Expression is too complex.\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression.\n");
    exit(EXIT_FAILURE);
}
