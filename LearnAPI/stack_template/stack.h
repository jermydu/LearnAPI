
#ifndef STACK_H
#define STACK_H

#include <vector>
#include <string>

namespace LearnAPI {

//由于模板的实现通常与声明在同一个文件中，所以不需要在.cpp文件中包含模板的定义
//包含了模板类的定义。由于模板在编译时需要完全可见，所以模板的定义通常放在头文件中
template <typename T>
class Stack
{
public:
	void Push(T val);
	T Pop();
	bool IsEmpty() const;

private:
	std::vector<T> mStack;
};


template <typename T>
void Stack<T>::Push(T val)
{
	mStack.push_back(val);
}

template <typename T>
T Stack<T>::Pop()
{
	if (IsEmpty())
		return T();
	T val = mStack.back();
	mStack.pop_back();
	return val;
}

template <typename T>
bool Stack<T>::IsEmpty() const
{
	return mStack.empty();
}

}

#endif
