#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"


int main()
{   
    stack stack_inf = {};
    
    stack_Constructor(&stack_inf, INITIAL_CAPACITY);

    stackPush(&stack_inf, 14);
    stackPush(&stack_inf, 18);
    stackPush(&stack_inf, 19);

    stack_Dump(&stack_inf);
    printf("\n\n");
    
    printf("%lg\n", stack_Pop(&stack_inf));
    
    stack_Dump(&stack_inf);

    stack_Pop(&stack_inf);
    
    printf("%lg\n", stack_Pop(&stack_inf));

    stack_Destructor(&stack_inf);
    stack_Dump(&stack_inf);
}




