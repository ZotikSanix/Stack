#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"




int stack_Destructor(stack *stk)
{
    free(stk->data);
    stk->size = 0;
    stk->capacity = 0;
    stk->data = 0;

    return 0;

}