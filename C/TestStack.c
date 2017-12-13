/*
TestStack Source
December 12, 2017
Demonstration of the Stack Structure in C.
*/

#include "Stack.h"

int main(int argc, char* argv[])
{
    Stack* stack = stackCreate(sizeof(int));

    // Ask for user input until end condition is met.
    for(;;)
    {
        printf("Please enter a non-negative number to convert to binary: \n");
        long input;
        scanf("%ld", &input);

        // If 0 is entered, break loop.
        if(input < 0) break;

        // Use Stack for binary conversion.
        do
        {
            int bin = input % 2;
            stackPush(stack, &bin);
            input /= 2;
        }
        while(input != 0);

        // Pop elements of Stack to print conversion.
        while(stackTop(stack) != NULL)
        {
            printf("%d", *((int*)stackPop(stack)));
        }

        // Prepare new lines for next input.
        printf("\n\n");
    }

    // Destroy and free memory allocated to the Stack.
    stackFree(stack);
    return 0;
}
