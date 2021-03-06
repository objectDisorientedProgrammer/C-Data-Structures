/**
    @file hashmap.c


 * map[ X X X X X X X X ]
 *      | | | | | | | |
 *      v v v v v v v v
 *      O O O O O O O O


    MIT License

    Copyright (c) 2016 Douglas Chidester

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.

 */

#include "hashmap.h"

// Private variables
// need map of pointers to structs
static VALTYPE map[MAP_SIZE];
static int hashvalue = 0;
static int mapSize = 0;

int hashFn(KEYTYPE elem)
{
    KEYTYPE high = elem;
    high = high >> 4;

    KEYTYPE low = elem;
    low = low << 4;

    hashvalue = low * high;
    return hashvalue % MAP_SIZE;
}

void put(KEYTYPE key)
{
    map[hashFn(key)] = hashvalue;
    ++mapSize;
}

void printMapInfo(void)
{
    for(int i = 0; i < MAP_SIZE; ++i)
        printf("map[%d] = %d\n", i, map[i]);
}

