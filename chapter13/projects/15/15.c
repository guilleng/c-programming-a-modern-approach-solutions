/*
 * C programming: A Modern Approach. Chapter 13, Project 15
 * Date: April 2023
 * Description: Evaluates Reverse Polish Notation addition subtraction, 
 *              multiplication and division of single digit positive integer 
 *              operands using a stack.  
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 32
#define INPUT_SIZE 32

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int item);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int evaluate_RPN_expression(const char *expression);
int read_line(char *str, int n);

int main(void)
{
    char input[INPUT_SIZE+1];

    while (true)
    {
        make_empty();
        printf("Enter an RPN expression: ");
        read_line(input, INPUT_SIZE);
        printf("Value of expression: %d\n", evaluate_RPN_expression(input));
    }
}

int evaluate_RPN_expression(const char *expression)
{
    int operand;

    while (*expression) 
	{
        if (isdigit(*expression)) 
        {
            push(*expression - '0');
            expression++;
        }
        else if (isspace(*expression)) 
        {
            expression++;
            continue;
        } 
        else
        {
            switch(*expression++) 
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
                    return(pop());
                default:    
                    exit(EXIT_SUCCESS);
            }
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
    puts("overflow");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    puts("underflow");
    exit(EXIT_FAILURE);
}

/*
 * Reads up to `n` characters or until a newline. Skips leading withe spaces. 
 * The characters are stored in `str`, with a null terminator at the end. 
 * Returns the number of characters stored. 
 */
int read_line(char str[], int n)
{
    int ch, i = 0;
    
    while ((ch = getchar()) == ' ' || ch == '\t')
    {
        ;
    }
    while (ch != '\n' && ch != EOF)
    {
        if (i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }
    str[i] = '\0';
    
    return i;
}
