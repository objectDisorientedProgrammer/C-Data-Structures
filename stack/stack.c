/*
    MIT License

    Copyright (c) 2016 Douglas Chidester

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

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
