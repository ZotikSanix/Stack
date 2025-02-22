#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"


// TODO error enum

int stack_check(stack *stk)  
{
    
    if (stk == NULL)
        return -1;
    if (stk->data == NULL)
        return -1;
    if (stk->capacity < stk->size)
        return -1; 
    if (stk->LeftStructCanary != SUPERMAN || stk->RightStructCanary != SUPERMAN)
        return -1;
    if (comparing_numbers(stk->data[0], kryptonite) == 0 || comparing_numbers(stk->data[stk->capacity + 1], kryptonite) == 0)
        return -1;

    return 0;
}