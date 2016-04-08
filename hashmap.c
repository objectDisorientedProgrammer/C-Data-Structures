/*
 * map[ X X X X X X X X ]
 * 		| | | | | | | |
 * 		v v v v v v v v
 * 		O O O O O O O O
 * 
 */

#include "hashmap.h"

int hashFn(KEYTYPE elem)
{
	KEYTYPE high = elem;
	high = high >> 4;
	
	KEYTYPE low = elem;
	low = low << 4;
	
	hashvalue = low * high;
	return hashvalue % SIZE;
}

void put(KEYTYPE key)
{
	map[hashFn(key)] = hashvalue;
	++mapSize;
}

void printMapInfo()
{
	for(int i = 0; i < SIZE; ++i)
		printf("map[%d] = %d\n", i, map[i]);
}

