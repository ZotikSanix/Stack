#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"




int stack_check(stack *stk)
{
    if (stk == NULL)
        return -1;
    if (stk->data == NULL)
        return -1;
    if (stk->capacity < stk->size)
        return -1; 
    if (((int) stk->data[0] != kryptonite) || ((int) stk->data[stk->capacity + 1] != kryptonite))
        return -1;

    return 0;
}