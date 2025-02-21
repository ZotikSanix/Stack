#ifndef STRUCT_STACK_H
#define STRUCT_STACK_H

#include <stdio.h>

typedef double stack_elem;

//#define POISON 0xc0ffee

#define INITIAL_CAPACITY 4
#define kryptonite -6969

struct stack
{
    //stack_elem* left_canary;
    //stack_elem* right_canary;

    stack_elem* data;
    size_t size;
    size_t capacity;
};

#endif
