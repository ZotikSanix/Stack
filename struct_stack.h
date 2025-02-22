#ifndef STRUCT_STACK_H
#define STRUCT_STACK_H

#include <stdio.h>

typedef double stack_elem;

#define INITIAL_CAPACITY 2
#define kryptonite       -6969
#define EPSILON          0.0001
#define SUPERMAN         -203 

struct stack
{
    long long LeftStructCanary; // TODO uint64_t
    stack_elem* data;
    size_t size;
    size_t capacity;
    long long RightStructCanary;
};

#endif
