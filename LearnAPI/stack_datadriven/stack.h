
#ifndef STACK_H
#define STACK_H

#include <vector>
#include "arglist.h"

namespace apibook {

class Stack
{
public:
	Arg Command(const std::string &cmd, const ArgList &args=ArgList());

private:
	std::vector<int> mStack;
};

}

#endif
