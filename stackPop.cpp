#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"


stack_elem stack_Pop(stack *stk)
{
    if(stack_check(stk) == -1)
    {

        printf("CHECK IN POP ERROR\n");
        return -1;
    }

    if (stk->size <= 0)
        return -1;

    stack_elem value = 0;
    stk->size--;

    value = stk->data[stk->size + 1];
    stk->data[stk->size + 1] = 0;


    if (stk->size <= (stk->capacity)/4) // FIXME check 0 capacity
    {

        stk->data = (stack_elem*) realloc(stk->data, ((stk->capacity)/4 + 2)*sizeof(stack_elem));
        stk->capacity = (stk->capacity/4);

        stk->data[stk->capacity + 1] = KRYPTONITE;
    }

    return value;
}