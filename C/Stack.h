#ifndef _STACK_H
#define _STACK_H

#include <stdlib.h>

/*
Stack Header
December 12, 2017
Declarations of the Stack Structure in C.
*/

// Create structure for Nodes of the Stack.
typedef struct {
    void *data;
    struct Node *next;
} Node;

// Create structure that will be used as the Stack.
typedef struct {
    Node *top;
    int memory;
    int length;
} Stack;

// Declare all the operations to be used by the Stack.
Stack *stackCreate(int memory);
void   stackPush(Stack *stack, void *data);
void  *stackPop(Stack *stack);
void   stackFree(Stack *stack);
void  *stackTop(Stack *stack);
#endif
