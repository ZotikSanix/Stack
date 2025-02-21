#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"



void stack_Dump(stack *stk)
{
    stack_check(stk);
    printf("stack_capacity = %d\n", stk->capacity);
    printf("stack_size = %d\n", stk->size);
    
    for (size_t i = 0; i < stk->capacity; i++)
    {
        printf("%lg\n", stk->data[i + 1]);
    }

}