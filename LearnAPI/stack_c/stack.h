
#ifndef STACK_H
#define STACK_H


typedef struct Stack* StackPtr;


StackPtr StackCreate();
void StackDestroy(StackPtr stack);

void StackPush(StackPtr stack, int val);
int StackPop(StackPtr stack);
int StackIsEmpty(const StackPtr stack);

#endif
