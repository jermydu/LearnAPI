#pragma once

class IOriginal
{
public:
	virtual ~IOriginal() {};
	virtual void DoSomething(int nValue) = 0;
};