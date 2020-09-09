#include "wvtest.h"
#include "queue.h"

WVTEST_MAIN("Empty queue")
{
    WVPASS(Queue_isEmpty() == true);
}

WVTEST_MAIN("Non empty queue")
{
    Queue_enque('D');
    WVFAIL(Queue_isEmpty() == true);
    WVPASSEQ(Queue_removeAll(), 1);
}

WVTEST_MAIN("Enqueue full")
{
    WVPASSEQ(Queue_getSize(), 0);
    Queue_enque('W');
    WVPASSEQ(Queue_getSize(), 1);
    Queue_enque('V');
    WVPASSEQ(Queue_getSize(), 2);
    Queue_enque('T');
    WVPASSEQ(Queue_getSize(), 3);
    Queue_enque('E');
    WVPASSEQ(Queue_getSize(), 4);
    Queue_enque('S');
    WVPASSEQ(Queue_getSize(), 5);
    Queue_enque('T');
    WVPASSEQ(Queue_getSize(), 6);
    Queue_enque(' ');
    WVPASSEQ(Queue_getSize(), 7);
    Queue_enque('I');
    WVPASSEQ(Queue_getSize(), 8);
    Queue_enque('S');
    WVPASSEQ(Queue_getSize(), 9);
    Queue_enque(' ');
    WVPASSEQ(Queue_getSize(), 10);
    Queue_enque('G');
    WVFAILEQ(Queue_getSize(), 11);
    Queue_enque('O');
    WVFAILEQ(Queue_getSize(), 12);

    WVPASSEQ(Queue_getSize(), 10);
    WVPASSEQ(Queue_removeAll(), 10);
}

WVTEST_MAIN("Peek")
{
    Queue_enque('D');
    WVPASSEQ('D', Queue_peek());
    WVPASSEQ('D', Queue_deque());
}

