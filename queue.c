#include "queue.h"

void enque(QTYPE elem)
{
	if(qSize != QSIZE)
	{
		queue[r++ % QSIZE] = elem;
		++qSize;
	}
	else
		puts("too many elements");
}

int isEmpty(void)
{
	return qSize == 0? 1 : 0;
}

QTYPE deque(void)
{
	if(!isEmpty())
	{
		--qSize;
		return queue[f++ % QSIZE];
	}
}

QTYPE peek(void)
{
	return queue[f];
}

void printQueueInfo(void)
{
	if(!isEmpty())
	{
		for(int i = f; i < r; ++i)
			printf("%c", queue[i % QSIZE]);
		printf(" %d elements in the queue\n", qSize); // TODO change with QTYPE
	}
	else
		puts("[INFO] empty queue");
}
