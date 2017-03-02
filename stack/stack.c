#include "stack.h"

// local variables
static TYPE stack[SIZE];
static int i = 0;

void Stack_push(TYPE ele)
{
    if(i + 1 < SIZE)
        stack[i++] = ele;
}

TYPE Stack_pop()
{
    return stack[i--];
}

bool Stack_isEmpty()
{
    return i > 0? false : true;
}

int Stack_getSize()
{
    unsigned int size = 0;
    
    if(i >= 1)
        size = i - 1;

    return size;
}

/* TODO move to main...
void Stack_printInfo()
{
    if(!Stack_isEmpty())
    {
        for(int s = i - 1; s >= 0; --s)
            printf(" | %c |\n", stack[s]); // todo change with TYPE
        puts(" -----");
        printf("[INFO] %d elements in the stack\n", i);
    }
    else
        printf("[INFO] empty stack\n");
    
}
*/


/*
int main(int argc, char* argv[])
{   
    printStackInfo();
    push('g');
    push('u');
    push('o');
    push('D');
    printStackInfo();
    
    pop();
    pop();
    printStackInfo();
    
    return 0;
}
*/
