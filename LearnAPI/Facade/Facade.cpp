#include "Facade.h"
#include <iostream>

using namespace std;

/////////////////////////Impl
Impl::Impl()
	:m_original1(nullptr),m_original2(nullptr)
{

}

Impl::~Impl()
{
	if (m_original1)
	{
		delete m_original1;
		m_original1 = nullptr;
	}
	if (m_original2)
	{
		delete m_original2;
		m_original2 = nullptr;
	}
}

Original1* Impl::GetOriginal1()
{
	if (!m_original1)
	{
		cout << "create Original1" << endl;
		m_original1 = new Original1();
	}
	return m_original1;
}

Original2* Impl::GetOriginal2()
{
	if (!m_original2)
	{
		cout << "create Original2" << endl;
		m_original2 = new Original2();
	}
	return m_original2;
}

/////////////////////////Facade
Facade::Facade()
	:m_pImpl(new Impl())
{

}
Facade::~Facade()
{
	if (m_pImpl)
	{
		delete m_pImpl;
		m_pImpl = nullptr;
	}
}
void Facade::DoSometing()
{
	if (m_pImpl)
	{
		m_pImpl->GetOriginal1()->DoSometing(32);
		m_pImpl->GetOriginal2()->DoSometing();
	}
}
