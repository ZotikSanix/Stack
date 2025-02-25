#include <stdio.h>
#include <stdlib.h>

#include "struct_stack.h"
#include "function.h"


int main()
{   
    stack stack_inf = {};
    
    stackConstructor(&stack_inf, INITIAL_CAPACITY);

    stackPush(&stack_inf, 14);
    stackPush(&stack_inf, 18);
    stackPush(&stack_inf, 19);

    stackDump(&stack_inf);
    
    printf("%lg\n", stack_Pop(&stack_inf));
    printf("\n\n");
    

    stackDump(&stack_inf);
    
    printf("%lg\n", stack_Pop(&stack_inf));
    printf("\n\n");

    stackDump(&stack_inf);

    stackDestructor(&stack_inf);
}




