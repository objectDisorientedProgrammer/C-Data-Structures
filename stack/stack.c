#include "stack.h"
#include <stdio.h>

// local variables
static TYPE stack[SIZE];
static int i = 0;

void push(TYPE ele)
{
	if(i + 1 < SIZE)
		stack[i++] = ele;
	else
		fprintf(stderr, "size limit reached\n");
}

TYPE pop()
{
	return stack[i--];
}

bool isEmptyStack()
{
	return i > 0? false : true;
}

int getSize()
{
	return i - 1;
}

void printStackInfo()
{
	if(!isEmptyStack())
	{
		for(int s = i - 1; s >= 0; --s)
			printf(" | %c |\n", stack[s]); // todo change with TYPE
		puts(" -----");
		printf("[INFO] %d elements in the stack\n", i);
	}
	else
		printf("[INFO] empty stack\n");
	
}

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
