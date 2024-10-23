
#include "stack.h"
#include <iostream>
#include <string>

using namespace apibook;
using std::cout;
using std::endl;
using std::string;

int main(int, char **)
{
	Stack stack;

	ArgList a = ArgList();
	a.Add("foo", "bar");

	
	// push and pop a value to the stack
	cout << "Empty: " << stack.Command("IsEmpty").ToBool() << endl;
	stack.Command("Push", ArgList().Add("value", 10));
	cout << "Empty: " << stack.Command("IsEmpty").ToBool() << endl;
	int val = stack.Command("Pop").ToInt();
	cout << "Popped off: " << val << endl;
	cout << "Empty: " << stack.Command("IsEmpty").ToBool() << endl;
	
	
	return 0;
}
