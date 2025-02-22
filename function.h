#ifndef FUNCTION_H
#define FUNCTION_H


#include <stdio.h>
#include <string.h>
#include "struct_stack.h"

int stack_Constructor(stack *stk, size_t capacity);
int stack_Destructor(stack *stk);
int stackPush(stack *stk, stack_elem value);
int stack_check(stack *stk);
stack_elem stack_Pop(stack *stk);
void stack_Dump(stack *stk);
int comparing_numbers(stack_elem num1, double num2);

#endif