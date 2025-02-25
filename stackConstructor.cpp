#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "struct_stack.h"
#include "function.h"





int stackConstructor(stack *stk, size_t capacity)      
{
    assert(stk);

    stk->data = (stack_elem*) calloc((capacity + 2), sizeof(stack_elem)); // + 2 - canaries      
    stk->size = 0;
    stk->capacity = capacity;
    
    stk->data[0] = KRYPTONITE;
    stk->data[capacity + 1] = KRYPTONITE;

    stk->LeftStructCanary = SUPERMAN;
    stk->RightStructCanary = SUPERMAN;

    return 0;
}
