/*

*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>

typedef struct node Node; 
typedef struct node
{
	int data;
	Node* next;
} Node;

void printList(Node* start);
void printListReverse(Node* start);

#endif

