/*
 * C programming: A Modern Approach. Chapter , Project 06
 * Date: March 2023
 * Description: Evaluates Reverse Polish Notation addition subtraction, 
 *              multiplication and division of integer operands from stdin using 
 *              a stack.  
 */

#ifndef STDBOOL_H
#define STDBOOL_H

#include <stdbool.h>

#endif

#ifndef STDIO_H
#define STDIO_H

#include <stdio.h>

#endif

#ifndef STDLIB_H
#define STDLIB_H

#include <stdlib.h>

#endif

#include "stack.h"
#include "tokens.h"

/* 
 * Makes `s` and empty string 
 */
#define erase(s)       (s[0] = '\0')

/*
 * Maximum token length, including its sign.
 */
#define TOKEN_LEN 5

/* 
 * Prints the result of the expression evaluation or an error message
 */
void terminate(void);

int main(void)
{
    char token[TOKEN_LEN+1] = { 0 };

    while (true)
    {
        if (read_token(token, TOKEN_LEN) == 1 && isoperator(*token))
        {
            int operand;
            switch(token[0])
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
                    terminate();
                default:
                    break;
            }
        }
        else 
        {
            push(atoi(token));
        }
        erase(token);
    }
}

void terminate(void)
{
    int result = pop();
    if (is_empty())
    {
        printf("%d\n", result);
        exit(EXIT_SUCCESS);
    }
    else
    {
        fprintf(stderr, "Item(s) remain in stack\n");
        exit(EXIT_FAILURE);
    }
}
