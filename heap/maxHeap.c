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

#include "maxHeap.h"
#include <stdlib.h> // for NULL

int* heap = NULL;
int heapSize = 0;

// local functions
void maxHeapify(int* array, int length, int index);
void delete(int element);
void siftUp(void);
void siftDown(void);
int parent(int index); // floor((index - 1) / 2)
int leftChild(int index); // find left child of node at index (assuming zero based array)
int rightChild(int index); // find right child of node at index (assuming zero based array)

// external functions
void MaxHeap_create(int* array, int length)
{
    for(int i = length >> 1; i >= 0; --i)
        maxHeapify(array, length, i);
    heapSize = length;
    heap = array;
}

int MaxHeap_findMax(void)
{
    int maxValue;
    
    if(MaxHeap_isEmpty())
        maxValue = -1; // error, heap is empty
    else
        maxValue = heap[0]; // the root is always the max in a max heap
    
    return maxValue;
}

int MaxHeap_insert(int* array, int length, int element)
{
    // put element at the end of the array
    // call siftUp
}

int MaxHeap_deleteMax(void)
{

}

int MaxHeap_replace(int newElement)
{

}

int MaxHeap_getSize(void)
{
    return heapSize;
}

bool MaxHeap_isEmpty(void)
{
    return (heapSize == 0) ? true : false;
}

void maxHeapify(int* array, int length, int index)
{
    int left = leftChild(index);
    int right = rightChild(index);
    int largest = index;
    int swapVar;

    // if left element is > current largest, set largest to left
    if(left < length && array[left] > array[largest])
        largest = left;
    // if right element is > current largest, set largest to right
    if(right < length && array[right] > array[largest])
        largest = right;

    if(largest != index)
    {
        // swap array[index] and array[largest]
        swapVar = array[index];
        array[index] = array[largest];
        array[largest] = swapVar;

        maxHeapify(array, length, largest);
    }
}

int parent(int index)
{
    return ((index - 1) >> 1); // floor((index - 1) / 2)
}

int leftChild(int index)
{
    return ((2 * index) + 1);
}

int rightChild(int index)
{
    return ((2 * index) + 2);
}
