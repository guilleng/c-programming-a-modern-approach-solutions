#ifndef STACKADT_H
#define STACKADT_H

#define STACK_SIZE 64

typedef int Item;
typedef struct stack_type* Stack;

Stack create(int size);
void destroy(Stack s);
void make_empty(Stack s);
int is_empty(const Stack s);
int is_full(const Stack s);
void push(Stack s, int i);
Item pop(Stack s);

#endif
