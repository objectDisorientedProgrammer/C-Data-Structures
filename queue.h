/*
    queue.h
    13 April 2016
    Douglas Chidester

    A queue in C.
*/

#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>

#define QSIZE 10
#define QTYPE char

// private variables
static QTYPE queue[QSIZE];
static int f = 0;
static int r = 0;
static int qSize = 0;

// public functions
void enque(QTYPE elem);
int isEmpty(void);
QTYPE deque(void);
QTYPE peek(void);
void printQueueInfo(void);

#endif
