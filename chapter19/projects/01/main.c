/*
 * C programming: A Modern Approach. Chapter 19, Project 01
 * Date: May 2023
 * Description: Checks a series of matching parentheses using a stack.  
 */

#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

/*
 * Returns nonzero if the `left` parentheses/braces matches the `right` one.
 */
int match(char left, char right);

/*
 * Clears stackADT allocation
 */
void deallocate_stack(Stack s);

int main(void)
{
    char ch;
    Stack s;
    s = create();

    printf("Enter parentheses and/or braces: ");

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        switch (ch)
        {
            case '(': case '[': case '{':
                push(s, ch);
                break;

            case ')': case ']': case '}':
                if (is_empty(s) || !match(pop(s), ch))
                {
                    deallocate_stack(s);
                    printf("Parentheses/braces are NOT nested properly\n");
                    exit(EXIT_SUCCESS);
                }
                break;

            case ' ': case '\t':
                break;

            default:
                deallocate_stack(s);
                printf("Invalid input\n");
                exit(EXIT_SUCCESS);
        }
    }

    if (is_empty(s))
    {
        printf("Parentheses/braces are nested properly\n");
    }
    else
    {
        printf("Parentheses/braces are NOT nested properly\n");
    }

    deallocate_stack(s);
    exit(EXIT_SUCCESS);
}

int match(char left, char right)
{

    switch (right - left)
    {
        case 1: case 2: case 3:
            return 1;
        default:
            return 0;
    }
}
        
void deallocate_stack(Stack s)
{

    make_empty(s);
    destroy(s);

    return;
}
