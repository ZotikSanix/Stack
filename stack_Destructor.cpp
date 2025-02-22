#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"




int stack_Destructor(stack *stk)
{
    // TODO verificator

    free(stk->data);
    stk->size = 0;
    stk->capacity = 0;
    stk->data = nullptr;

    return 0;

}