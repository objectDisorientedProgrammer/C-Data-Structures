#include <stdio.h>

#define SIZE 10
#define TYPE char

TYPE queue[SIZE];
int f, r, qSize;

void enque(TYPE elem)
{
	if(qSize != SIZE)
	{
		queue[r++ % SIZE] = elem;
		++qSize;
	}
	else
		puts("too many elements");
}

int isEmpty()
{
	return qSize == 0? 1 : 0;
}

TYPE deque()
{
	if(!isEmpty())
	{
		--qSize;
		return queue[f++ % SIZE];
	}
}

TYPE peek()
{
	return queue[f];
}

void printQueueInfo()
{
	if(!isEmpty())
	{
		for(int i = f; i < r; ++i)
			printf("%c", queue[i % SIZE]);
		printf(" %d elements in the queue\n", qSize); // todo change with TYPE
	}
	else
		puts("[INFO] empty queue");
}
/*
int main(void)
{
	f = 0;
	r = 0;
	qSize = 0;
	
	printQueueInfo();
	enque('D');
	enque('o');
	enque('u');
	enque('g');
	enque(' ');
	enque('i');
	enque('s');
	enque(' ');
	printQueueInfo();
	enque('c');
	enque('o');
	printQueueInfo();
	deque();
	deque();
	printQueueInfo();
	enque('o');
	enque('l');
	printQueueInfo();
	
	return 0;
}
*/

