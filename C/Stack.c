/*
Stack Source
December 12, 2017
Implementation of the Stack Structure in C.
*/

#include "Stack.h"

// Create a memory assignment for the Stack and returns it.
Stack* stackCreate(int memory)
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->memory = memory;
    stack->length = 0;
    return stack;
}

// Creates a memory assignment for a new Node and tops the Stack off.
void stackPush(Stack* stack, void* data)
{
    Node* top = stack->top;
    stack->top = (Node*)malloc(sizeof(Node));
    stack->top->data = malloc(stack->memory);
    memcpy(stack->top->data, data, stack->memory);
    stack->top->next = top;
    stack->length++;
}

// Returns the data located in the Stack top before freeing the top.
void* stackPop(Stack* stack)
{
    if(stack->length == 0)
    {
        printf("STACK UNDERFLOW :: %p\n", stack);
        exit(EXIT_FAILURE);
    }
    // Perform data transfer and free current top.
    void* data = malloc(stack->memory);
    memcpy(data, stack->top->data, stack->memory);
    Node* top = stack->top;
    stack->top = stack->top->next;
    free(top);
    stack->length--;

    return data;
}

// Frees all of the data associated with the Stack.
void stackFree(Stack* stack)
{
    while(stack->length > 0)
        free(stackPop(stack));
    free(stack);
}

// Returns the data located at the top of the stack.
void* stackTop(Stack* stack)
{
    if(stack->length == 0)
        return NULL;
    else
        return stack->top->data;
}
