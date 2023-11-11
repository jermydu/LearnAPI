#pragma once
#include "Original.h"

class Impl
{
public:
	Impl();
	~Impl();

	Original1* GetOriginal1();
	Original2* GetOriginal2();
private:
	Original1* m_original1;
	Original2* m_original2;
};

class Facade
{
public:
	Facade();
	~Facade();
 	void DoSometing();
private:
	Facade(const Facade& f);
	const Facade& operator= (const Facade& o);

	Impl* m_pImpl;
};

