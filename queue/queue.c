#include "queue.h"

void Queue_enque(QTYPE elem)
{
    if(qSize != QSIZE)
    {
        queue[r++ % QSIZE] = elem;
        ++qSize;
    }
}

bool Queue_isEmpty(void)
{
    return qSize == 0? true : false;
}

QTYPE Queue_deque(void)
{
    if(!Queue_isEmpty())
    {
        --qSize;
    }
    return queue[f++ % QSIZE];
}

QTYPE Queue_peek(void)
{
    return queue[f];
}

unsigned int Queue_removeAll(void)
{
    unsigned int oldSize = qSize;
    qSize = 0;
    f = 0;
    r = 0;
    return oldSize;
}

unsigned int Queue_getSize(void)
{
    return qSize;
}
