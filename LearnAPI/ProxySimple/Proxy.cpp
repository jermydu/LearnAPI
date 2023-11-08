#include "Proxy.h"

Proxy::Proxy() : m_pOriginal(new Original())
{
	cout << "call Proxy::Proxy()" << endl;
}

Proxy::~Proxy()
{
	cout << "call Proxy::~Proxy()" << endl;
	delete m_pOriginal;
	m_pOriginal = nullptr;
}

void Proxy::DoSomething(int nValue)
{
	cout << "call Proxy::DoSomething" << endl;
	if(m_pOriginal)
		return m_pOriginal->DoSomething(nValue);
}
