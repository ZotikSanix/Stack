#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"



int stackPush(stack *stk, stack_elem value)
{
    if(stack_check(stk) == -1)
    {

        printf("CHECK IN PUSH ERROR\n"); // TODO print errors in stderr
        return -1;
    }

    stk->data[stk->size + 1] = value;
    (stk->size)++;

    if(stk->size >= stk->capacity)
    {
        stk->data[stk->size + 1] = 0;
        stk->capacity = (stk->capacity) * 2 ;
        stk->data = (stack_elem*) realloc(stk->data, (stk->capacity + 2)*sizeof(stack_elem));

        stk->data[stk->capacity + 1] = KRYPTONITE;
    }

    return 0;
}