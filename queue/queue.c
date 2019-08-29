/**
    @file queue.c
    @created 13 April 2016
    @author Douglas Chidester

    @brief A queue in C.




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

#include "queue.h"

// private variables
static QTYPE queue[QSIZE];     // holds data
static unsigned int f = 0;     // front index
static unsigned int r = 0;     // rear index
static unsigned int qSize = 0; // current number of elements

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

