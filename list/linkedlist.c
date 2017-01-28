#include "linkedlist.h"

void printList(Node* start)
{
	for(Node* cur = start; cur; cur = cur->next)
		printf("node data = %d\n", cur->data);
}

void printListReverse(Node* start)
{
	if(start->next != NULL)
		printListReverse(start->next);
	printf("node data = %d\n", start->data);
}

