
#ifndef STACK_H
#define STACK_H

#include <vector>
#include <string>

namespace LearnAPI {

//����ģ���ʵ��ͨ����������ͬһ���ļ��У����Բ���Ҫ��.cpp�ļ��а���ģ��Ķ���
//������ģ����Ķ��塣����ģ���ڱ���ʱ��Ҫ��ȫ�ɼ�������ģ��Ķ���ͨ������ͷ�ļ���
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
