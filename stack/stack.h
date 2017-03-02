#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define SIZE 20   // max stack size
#define TYPE char // stack data type

// functions

/**
 * @brief
 * @param
 */
void Stack_push(TYPE ele);

/**
 * @brief
 * @return
 */
TYPE Stack_pop();

/**
 * @brief
 * @return
 */
bool Stack_isEmpty();

/**
 * @brief
 * @return
 */
int Stack_getSize();

/**
 * @brief
 */
void Stack_printInfo();


#endif
