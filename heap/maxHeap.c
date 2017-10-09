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

/**
 * @brief Balance the max heap from an index.
 * @param[in] elementIndex - the index to sift up from.
 */
int siftUp(int elementIndex);
int siftDown(int parentIndex);
int parent(int index); // floor((index - 1) / 2)
int leftChild(int index); // find left child of node at index (assuming zero based array)
int rightChild(int index); // find right child of node at index (assuming zero based array)

// external functions
void MaxHeap_create(int* array, int length)
{
    // set local variables
    heapSize = length;
    heap = array;

    for(int i = heapSize >> 1; i >= 0; --i)
        maxHeapify(heap, heapSize, i);
}

int MaxHeap_findMax(void)
{
    int maxValue;
    
    if(heap != NULL)
    {
        if(MaxHeap_isEmpty() == true)
            maxValue = -1; // error, heap is empty
        else
            maxValue = heap[0]; // the root is always the max in a max heap
    }
    else
    {
        maxValue = -2; // error, NULL pointer
    }
    
    return maxValue;
}

void MaxHeap_insert(int element)
{
    // put element at the end of the heap
    ++heapSize;
    heap[heapSize - 1] = element;

    // call siftUp from the new element to the root
    // balance the heap
    for(int p = heapSize - 1; p > 0; )
        p = siftUp(p);
}

void MaxHeap_deleteMax(void)
{
    --heapSize;
    // move last element to root
    heap[0] = heap[heapSize];

    // balance the heap
    for(int c = 0; c < heapSize; )
        c = siftDown(c);
}

void MaxHeap_replace(int newElement)
{
    // replace root value with new value
    heap[0] = newElement;

    // balance the heap
    for(int c = 0; c < heapSize; )
        c = siftDown(c);
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

int siftUp(int elementIndex)
{
    int parentIndex = parent(elementIndex);
    int leftIndex = leftChild(parentIndex);
    int rightIndex = rightChild(parentIndex);
    int swapVar = heap[parentIndex];
    int swapIndex = 0;

    // if right child within the heap bounds
    if(rightIndex < heapSize)
        // find the index of the max of left child's value and right child's value
        swapIndex = (heap[leftIndex] < heap[rightIndex]) ? rightIndex : leftIndex;
    else
        // no right child exists, use left
        swapIndex = leftIndex;

    // if the value at the swap index is > the value at the parent
    if(swapIndex < heapSize && heap[swapIndex] > heap[parentIndex])
    {
        // swap parent value with child value
        heap[parentIndex] = heap[swapIndex];
        heap[swapIndex] = swapVar;
    }
    
    return parentIndex;
}

int siftDown(int parentIndex)
{
    int leftIndex = leftChild(parentIndex);
    int rightIndex = rightChild(parentIndex);
    int swapIndex = 0;
    int swapVar = heap[parentIndex];

    if(rightIndex < heapSize)
        swapIndex = (heap[leftIndex] < heap[rightIndex]) ? rightIndex : leftIndex;
    else
        swapIndex = leftIndex;

    if(swapIndex < heapSize && heap[swapIndex] > heap[parentIndex])
    {
        heap[parentIndex] = heap[swapIndex];
        heap[swapIndex] = swapVar;
    }

    return swapIndex;
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
