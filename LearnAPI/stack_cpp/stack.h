
#ifndef STACK_H
#define STACK_H

#include <vector>

namespace apibook {

class IntStack
{
public:
	
	void Push(int val);
	int Pop();
	bool IsEmpty() const;

private:
	std::vector<int> mStack;
};

}

#endif
