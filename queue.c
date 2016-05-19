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

bool isEmpty(void)
{
	return qSize == 0? true : false;
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

unsigned int removeAll(void)
{
	unsigned int oldSize = qSize;
	qSize = 0;
	f = 0;
	r = 0;
	return oldSize;
}

void printQueueInfo(void)
{
	if(!isEmpty())
	{
		printf("'");
		for(unsigned int i = f; i < r; ++i)
			printf("%c", queue[i % QSIZE]);
		printf("' %d elements in the queue\n", qSize); // TODO change with QTYPE
	}
	else
		puts("[INFO] empty queue");
}
