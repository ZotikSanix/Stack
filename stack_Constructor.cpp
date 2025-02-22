#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"





int stack_Constructor(stack *stk, size_t capacity)
{
    stk->data = (stack_elem*) calloc((capacity + 2), sizeof(stack_elem));
    stk->size = 0;
    stk->capacity = capacity;
    
    stk->data[0] = kryptonite;
    stk->data[capacity + 1] = kryptonite;

    return 0;
}
