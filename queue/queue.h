/**
    @file queue.h
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

#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define QSIZE 10   // maximum size of the queue
#define QTYPE char // type of data stored in the queue

// public functions

/**
 * @brief Add an element to the queue.
 */
void Queue_enque(QTYPE elem);

/**
 * @brief Check if the queue has one or more elements.
 * @return true if there are no elements, otherwise false.
 */
bool Queue_isEmpty(void);

/**
 * @brief Remove an element from the queue.
 * @return the element that was removed.
 */
QTYPE Queue_deque(void);

/**
 * @brief Show the first element of the queue.
 * @return first element of the queue. 
 */
QTYPE Queue_peek(void);

/**
 * @brief Remove all elements of the queue.
 * @return number of elements removed.
 */
unsigned int Queue_removeAll(void);

/**
 * @brief Get the current number of elements in the queue.
 * @return number of elements.
 */
unsigned int Queue_getSize(void);

#endif // QUEUE_H

