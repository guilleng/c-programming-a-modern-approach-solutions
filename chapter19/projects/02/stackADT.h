/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

#ifndef STACKADT_H
#define STACKADT_H

typedef int Item;
typedef struct stack_type* Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
int is_empty(const Stack s);
int is_full(const Stack s);
void push(Stack s, int i);
Item pop(Stack s);

#endif
