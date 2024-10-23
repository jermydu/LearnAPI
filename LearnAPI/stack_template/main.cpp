
#include "stack.h"
#include <iostream>

using namespace LearnAPI;
using std::cout;
using std::endl;

int main(int, char **)
{
	Stack<int> stack;

	cout << "Empty: " << stack.IsEmpty() << endl;
	stack.Push(10);
	cout << "Empty: " << stack.IsEmpty() << endl;
	int val = stack.Pop();
	cout << "Popped off: " << val << endl;
	cout << "Empty: " << stack.IsEmpty() << endl;

	return 0;
}
