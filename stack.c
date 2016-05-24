#include <stdio.h>

#define SIZE 20
#define TYPE char

typedef int bool;

TYPE stack[SIZE];
int i;

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
	return i > 0? 0 : 1;
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
	i = 0;
	
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

