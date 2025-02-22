#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "struct_stack.h"
#include "function.h"


int comparing_numbers(stack_elem num1, double num2)
{
    if (fabs(num1 - num2) < EPSILON)
        return 1;
    else
        return 0;
}