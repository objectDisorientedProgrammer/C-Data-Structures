/*
    MIT License

    Copyright (c) 2017 Douglas Chidester

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

#ifndef CDS_MAX_HEAP_H
#define CDS_MAX_HEAP_H

#include <stdbool.h>

/**
 * @brief Create a max heap out of an array of elements.
 * @param[in] array - the array to turn into a heap.
 * @param[in] length - the length of the array.
 */
void MaxHeap_create(int* array, int length);

/**
 * @brief Find the maximum value in the heap.
 * @return max value, -1 if heap is empty, or -2 if heap is NULL.
 */
int MaxHeap_findMax(void);
void MaxHeap_insert(int); // add new value
int MaxHeap_extractMax(void); // remove root and return value
void MaxHeap_deleteMax(void); // remove root
void MaxHeap_replace(int); // replace root with new value

int MaxHeap_getSize(void);
bool MaxHeap_isEmpty(void);

#endif
