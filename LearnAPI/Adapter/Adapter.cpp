#include "Adapter.h"

Adapter::Adapter() : m_pOriginal(new Original())
{
	cout << "call Adapter::Adapter()" << endl;
}

Adapter::~Adapter()
{
	cout << "call Adapter::~Adapter()" << endl;
	delete m_pOriginal;
	m_pOriginal = nullptr;
}

void Adapter::DoSomething(int nValue)
{
	cout << "call Adapter::DoSomething" << endl;
	if(m_pOriginal)
		return m_pOriginal->DoSomething(nValue,true);
}
