#pragma once
#include "Original.h"


class Adapter
{
public:
	Adapter();
	~Adapter();
	void DoSomething(int nValue);

private:
	Adapter(const Adapter& p);
	const Adapter& operator= (const Adapter& o);

	Original* m_pOriginal;
};

