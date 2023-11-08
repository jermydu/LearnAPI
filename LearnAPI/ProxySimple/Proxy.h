#pragma once
#include "Original.h"


class Proxy
{
public:
	Proxy();
	~Proxy();
	void DoSomething(int nValue);

private:
	Proxy(const Proxy& p);
	const Proxy& operator= (const Proxy& o);

	Original* m_pOriginal;
};

