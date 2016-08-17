#ifndef STACK_H
#define STACK_H


#define SIZE 20
#define TYPE char

typedef int bool;

TYPE stack[SIZE];
int i;


// functions
void push(TYPE ele);
TYPE pop();
bool isEmptyStack();
int getSize();
void printStackInfo();


#endif
