#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"



void stack_Dump(stack *stk)
{
    if(stack_check(stk) == -1)
    {

        printf("CHECK IN DUMP ERROR\n");
    }

    printf("stack_capacity = %d\n", stk->capacity);
    printf("stack_size = %d\n", stk->size);
    
    for (size_t i = 0; i < stk->capacity; i++)
    {
        printf("data[%d] = %lg\n", i+1, stk->data[i + 1]);
    }

}