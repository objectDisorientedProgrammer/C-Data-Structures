#include "maxHeap.h"
#include <stdio.h>

#define SIZE 40

void printArray(int* a, int length)
{
    for (int i = 0; i < length; ++i)
    {
        printf("%3d ", a[i]);
    }
    if(length == 0)
        printf("empty array");
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int randomNumbers[10] = { 12, 3, 76, 4, 15, 30, 45, 43, 100, 256};
    int randomNumbersCopy[10] = { 12, 3, 76, 4, 15, 30, 45, 43, 100, 256};
    int data[SIZE] = { 1, 2, 3, 7, 17, 19, 25, 36, 100};
    int i = 9;

    // for (i = 0; i < 10; ++i)
    // {
    //     data[i] = i;
    // }

    printArray(data, i);
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n\n", (MaxHeap_isEmpty()?"true":"false"));

    MaxHeap_create(data, i);

    printArray(data, i);
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    ++i;
    MaxHeap_insert(i);
    printArray(data, i);
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    ++i;
    MaxHeap_insert(51);
    printArray(data, i);
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    ++i;
    MaxHeap_insert(102);
    printArray(data, i);
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    ++i;
    MaxHeap_insert(101);
    printArray(data, MaxHeap_getSize());
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    MaxHeap_deleteMax();
    printArray(data, MaxHeap_getSize());
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    MaxHeap_deleteMax();
    printArray(data, MaxHeap_getSize());
    MaxHeap_deleteMax();
    printArray(data, MaxHeap_getSize());
    MaxHeap_deleteMax();
    printArray(data, MaxHeap_getSize());
    MaxHeap_deleteMax();
    printArray(data, MaxHeap_getSize());
    MaxHeap_deleteMax();
    printArray(data, MaxHeap_getSize());

    MaxHeap_replace(0);
    printArray(data, MaxHeap_getSize());
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    // for( ; i < 15; ++i)
    // {
    //     MaxHeap_insert(data, i, i);
    //     printf("insert %d\n", i);
    //     printArray(data, i);
    //     printf("size = %d\n", MaxHeap_getSize());
    //     printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    //     printf("max value = %d\n\n", MaxHeap_findMax());
    // }


    MaxHeap_create(randomNumbers, 10);
    printArray(randomNumbers, MaxHeap_getSize());
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    int sortedMinMax[10];

    for (int i = 9; i >= 0; --i)
    {
        sortedMinMax[i] = MaxHeap_extractMax();
    }

    printArray(sortedMinMax, 10);

    printArray(randomNumbers, MaxHeap_getSize());
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    MaxHeap_create(randomNumbersCopy, 10);
    printArray(randomNumbersCopy, MaxHeap_getSize());
    printf("size = %d\n", MaxHeap_getSize());
    printf("isEmpty = %s\n", (MaxHeap_isEmpty()?"true":"false"));
    printf("max value = %d\n\n", MaxHeap_findMax());

    int sortedMaxMin[10];

    for (int i = 0; i < 10; ++i)
    {
        sortedMaxMin[i] = MaxHeap_extractMax();
    }

    printArray(sortedMaxMin, 10);

    return 0;
}