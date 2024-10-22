
#include "stack.h"

namespace apibook {

void IntStack::Push(int val)
{
	mStack.push_back(val);
}

int IntStack::Pop()
{
	if (IsEmpty())
		return 0;
	int val = mStack.back();
	mStack.pop_back();
	return val;
}

bool IntStack::IsEmpty() const
{
	return mStack.empty();
}

}
