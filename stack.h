#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define SIZE 20
#define TYPE char

// functions
void push(TYPE ele);
TYPE pop();
bool isEmptyStack();
int getSize();
void printStackInfo();


#endif
