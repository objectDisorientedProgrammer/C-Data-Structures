/*
    queue.h
    13 April 2016
    Douglas Chidester

    A queue in C.
*/

#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdbool.h>

#define QSIZE 10
#define QTYPE char

// private variables
static QTYPE queue[QSIZE]; // holds data
static unsigned int f = 0;          // front index
static unsigned int r = 0;          // rear index
static unsigned int qSize = 0;      // current number of elements

// public functions
void enque(QTYPE elem);

/**
 * Check if the queue has one or more elements.
 * @return true if there are no elements, otherwise false.
 */
bool isEmpty(void);

/**
 * Remove an element from the queue.
 * @return the element that was removed.
 */
QTYPE deque(void);

/**
 * Show the first element of the queue.
 * @return first element of the queue. 
 */
QTYPE peek(void);

/**
 * Print all elements in the queue if there are any.
 */
void printQueueInfo(void);

/**
 * Remove all elements of the queue.
 * @return number of elements removed.
 */
unsigned int removeAll(void);

#endif
