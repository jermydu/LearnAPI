#include "stack.h"
#include <iostream>

using namespace apibook;
using std::cout;
using std::endl;

int main(int, char **)
{
	IntStack stack;

	cout << "Empty: " << stack.IsEmpty() << endl;
	stack.Push(10);
	cout << "Empty: " << stack.IsEmpty() << endl;
	int val = stack.Pop();
	cout << "Popped off: " << val << endl;
	cout << "Empty: " << stack.IsEmpty() << endl;

	return 0;
}
