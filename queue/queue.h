/*
    queue.h
    13 April 2016
    Douglas Chidester

    A queue in C.
*/

#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define QSIZE 10   // maximum size of the queue
#define QTYPE char // type of data stored in the queue

// private variables
static QTYPE queue[QSIZE];     // holds data
static unsigned int f = 0;     // front index
static unsigned int r = 0;     // rear index
static unsigned int qSize = 0; // current number of elements

// public functions

/**
 * @brief Add an element to the queue.
 */
void Queue_enque(QTYPE elem);

/**
 * @brief Check if the queue has one or more elements.
 * @return true if there are no elements, otherwise false.
 */
bool Queue_isEmpty(void);

/**
 * @brief Remove an element from the queue.
 * @return the element that was removed.
 */
QTYPE Queue_deque(void);

/**
 * @brief Show the first element of the queue.
 * @return first element of the queue. 
 */
QTYPE Queue_peek(void);

/**
 * @brief Remove all elements of the queue.
 * @return number of elements removed.
 */
unsigned int Queue_removeAll(void);

/**
 * @brief Get the current number of elements in the queue.
 * @return number of elements.
 */
unsigned int Queue_getSize(void);

#endif
