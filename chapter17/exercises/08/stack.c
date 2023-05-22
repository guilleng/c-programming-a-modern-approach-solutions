/*
 * C programming: A Modern Approach. Chapter 17, exercise 08
 * Date: May 2023
 * Description: Implementation of a stack in the heap. 
 */

#include <stdlib.h>
#include <stdio.h>

struct stack {
    int item;
    struct stack *next;
};

struct stack *top = NULL;

void make_empty(void)
{
    while (top)
    {
        struct stack *q = top;
        top = top->next;
        free(q);
    }
}

int is_empty(void)
{
    return top == NULL;
}
   
int push(int i)
{
    struct stack *new = malloc(sizeof(struct stack));
    if (new == NULL)
    {
        return 0;
    }
    else
    {
        new->item= i;
        new->next = top;
        top = new;
        return 1;
    }
}
        
int pop(void)                                                                   
{                                                                               
    if (is_empty())                                                             
    {                                                                           
        fprintf(stderr, "Empty stack, no item to pop\n");                       
        exit(EXIT_FAILURE);                                                     
    }                                                                           
    else                                                                        
    {                                                                           
        int pop = top->item;                                                    
        struct stack *p = top;                                                  
        top = top->next;                                                        
        free(p);                                                                
        return pop;                                                             
    }                                                                           
} 
