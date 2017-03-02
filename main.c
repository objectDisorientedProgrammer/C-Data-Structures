/*
    main.c
    8 April 2016
    Douglas Chidester

    Used for testing data structure implementations.
*/

#include "main.h"

static void printData(void* data, char format);
static void printList(Node* start, char format);
static void printListReverse(Node* start, char format);

/**
 * @brief Print all elements in the queue if there are any.
 */
void printQueueInfo(void);

int main(int argc, char* argv[])
{
    // TODO put in test() function
    testList();

    // hashmap
    // TODO put in test() function
    // put('c');
    // put('q');

    // printMapInfo();

    // TODO add test() functions for stack and queue
    // testQueue();

    return 0;
}

/*
static void printData(void* data, char format)
{
    if(data != NULL)
    {
        switch(format)
        {
            case 'c': // character
                char c = (char) *data;
                printf("node data = %c\n", c));
                break;
            case 'd': // integer
            case 'i':
                int i = (int) *data;
                printf("node data = %d\n", i);
                break;
            case 'f':
                float f = (float) *data;
                printf("node data = %.2f\n", f));
                break;
            case 'x':
                char x = (char) *data;
                printf("node data = %x\n", x));
                break;
            default:
                break;
        }
    }
}
*/

/**
 * @param start - pointer to starting node.
 * @param format - format specifier for printf ('d' for int, 'c' for char, 'f' for float, etc.)
 */
static void printList(Node* start, char format)
{
    for(Node* cur = start; cur; cur = cur->next)
        printf("node data = %d\n", cur->data);
        //printData(cur->data, format);
}

static void printListReverse(Node* start, char format)
{
    if(start->next != NULL)
        printListReverse(start->next, format);

    printf("node data = %d\n", start->data);
    //printData(start->data, format);
}

void testList(void)
{
    Node* head = NULL;
    Node a, b, c, d, e;
    a.data = 1;
    a.next = NULL;

    b.data = 2;
    b.next = &a;

    c.data = 3;
    c.next = &b;

    d.data = 4;
    d.next = &c;

    e.data = 5;
    e.next = &d;

    head = &e;

    puts("list:");
    printList(head, 'd');
    puts("list reversed:");
    printListReverse(head, 'd');
}

void printQueueInfo(void)
{
    /* TODO make this work...
    if(!Queue_isEmpty())
    {
        printf("%d elements in the queue.\n", Queue_getSize());
        // printf("'");
        // for(unsigned int i = f; i < r; ++i)
        //     printf("%c", queue[i % QSIZE]);
        // printf("' %d elements in the queue\n", qSize); // TODO change with QTYPE
    }
    else
        puts("[INFO] empty queue");
    */
}

// void testQueue(void)
// {
//     if(isEmpty())
//         puts("empty queue");
//     else
//         puts("not empty queue");
//     printQueueInfo();
//     enque('D');
//     enque('o');
//     enque('u');
//     enque('g');
//     enque(' ');
//     enque('i');
//     enque('s');
//     enque(' ');
//     printQueueInfo();
//     enque('c');
//     enque('o');
//     printQueueInfo();
//     deque();
//     deque();
//     printQueueInfo();
//     printf("removed %d elements\n", removeAll());
//     enque('o');
//     enque('l');
//     printQueueInfo();
// }
