#pragma once
#include "Original.h"


class Proxy : public IOriginal
{
public:
	Proxy();
	~Proxy();
	void DoSomething(int nValue) override;

private:
	Proxy(const Proxy& p);
	const Proxy& operator= (const Proxy& o);

	Original* m_pOriginal;
};

