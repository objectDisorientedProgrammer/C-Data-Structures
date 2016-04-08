/*
    main.c
    8 April 2016
    Douglas Chidester

    Used for testing data structure implementations.
*/

#include "main.h"

int main(int argc, char* argv[])
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

	// hashmap
	put('c');
	put('q');
	
	printMapInfo();

	return 0;
}
