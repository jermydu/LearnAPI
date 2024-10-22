
#include "stack.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	
	StackPtr stack = StackCreate();
	int val;

	printf( "Empty: %d\n", StackIsEmpty(stack));
	StackPush(stack, 10);
	printf("Empty: %d\n", StackIsEmpty(stack));
	val = StackPop(stack);
	printf("Popped off: %d\n", val);
	printf("Empty: %d\n", StackIsEmpty(stack));

	StackDestroy(stack);
	return 0;
}
