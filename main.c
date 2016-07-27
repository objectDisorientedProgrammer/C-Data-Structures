/*
    main.c
    8 April 2016
    Douglas Chidester

    Used for testing data structure implementations.
*/

#include "main.h"

int main(int argc, char* argv[])
{
    // TODO put in test() function
	testList();

	// hashmap
    // TODO put in test() function
	// put('c');
	// put('q');
	
	// printMapInfo();

    // TODO add test() functions for stack and queue
    // testQueue();

	return 0;
}

void testList(void)
{
	Node* head = NULL;
	Node a, b, c, d, e;
	a.data = 1;
	a.next = NULL;
	
	b.data = 2;
	b.next = &a;

	c.data = 3;
	c.next = &b;

	d.data = 4;
	d.next = &c;

	e.data = 5;
	e.next = &d;

	head = &e;

	puts("list:");
	printList(head);
	puts("list reversed:");
	printListReverse(head);
}

// void testQueue(void)
// {
// 	if(isEmpty())
// 		puts("empty queue");
// 	else
// 		puts("not empty queue");
// 	printQueueInfo();
// 	enque('D');
// 	enque('o');
// 	enque('u');
// 	enque('g');
// 	enque(' ');
// 	enque('i');
// 	enque('s');
// 	enque(' ');
// 	printQueueInfo();
// 	enque('c');
// 	enque('o');
// 	printQueueInfo();
// 	deque();
// 	deque();
// 	printQueueInfo();
// 	printf("removed %d elements\n", removeAll());
// 	enque('o');
// 	enque('l');
// 	printQueueInfo();
// }

