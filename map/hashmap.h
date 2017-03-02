/*
    hashmap.h
    8 April 2016
    Douglas Chidester
*/

#ifndef HASHMAP_H
#define HASHMAP_H

#include <stdio.h>

#define KEYTYPE char
#define VALTYPE int
#define SIZE 2

typedef struct pair
{
    KEYTYPE k;
    VALTYPE v;
    // add a 'next' pointer? (chaining)
} Pair;

// Private variables
// need map of pointers to structs
static VALTYPE map[SIZE];
static int hashvalue = 0;
static int mapSize = 0;


// Public functions
int hashFn(KEYTYPE elem);
void put(KEYTYPE key);
void printMapInfo();

#endif

