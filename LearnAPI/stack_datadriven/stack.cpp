
#include "stack.h"
#include <iostream>

using std::cout;
using std::endl;

namespace apibook {

Arg Stack::Command(const std::string &cmd, const ArgList &args)
{
	if (cmd == "Push")
	{
		mStack.push_back(args.Get("value").ToInt());
		return Arg(true);
	}

	if (cmd == "Pop")
	{
		if (mStack.empty())
			return Arg(0);
		int val = mStack.back();
		mStack.pop_back();
		return Arg(val);
	}

	if (cmd == "IsEmpty")
	{
		return Arg(mStack.empty());
	}

	cout << "ERROR: unknown command for Stack" << endl;
	return Arg();
}


}

