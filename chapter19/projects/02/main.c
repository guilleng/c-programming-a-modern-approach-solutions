/*
 * C programming: A Modern Approach. Chapter 19, Project 02
 * Date: May 2023
 * Description: Evaluates Reverse Polish Notation addition, subtraction, 
 *              multiplication and division of integer operands from stdin using 
 *              a stack.  
 */

#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"
#include "tokens.h"

/* 
 * Makes `s` and empty string 
 */
#define erase(s)       (s[0] = '\0')

/*
 * Maximum token length, including its sign
 */
#define TOKEN_LEN 5

/* 
 * Prints the result of the expression evaluation or an error message
 */
void terminate(void);

/* 
 * Deallocates stack
 */
void cleanup(void);

Stack s;

int main(void)
{
    char token[TOKEN_LEN+1] = { 0 };
    s = create();

    while (1)
    {
        if (read_token(token, TOKEN_LEN) == 1 && isoperator(*token))
        {
            int operand;
            switch(token[0])
            {
                case '+':
                    push(s, pop(s) + pop(s));
                    break;
                case '-':
                    operand = pop(s);
                    push(s, pop(s) - operand);
                    break;
                case '*':
                    push(s, pop(s) * pop(s));
                    break;
                case '/':
                    operand = pop(s);
                    push(s, pop(s) / operand);
                    break;
                case '=':
                    terminate();
                default:
                    break;
            }
        }
        else 
        {
            push(s, atoi(token));
        }
        erase(token);
    }

    atexit(cleanup);
}

void terminate(void)
{
    int result = pop(s);

    if (is_empty(s))
    {
        printf("%d\n", result);
        exit(EXIT_SUCCESS);
    }
    else
    {
        fprintf(stderr, "Bad input, item(s) remain in stack\n");
        exit(EXIT_FAILURE);
    }

    return;
}

void cleanup(void)
{

    make_empty(s);
    destroy(s);

    return;
}
