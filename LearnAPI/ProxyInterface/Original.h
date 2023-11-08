#pragma once
#include <iostream>
#include "IOriginal.h"

using namespace std;

class Original : public IOriginal
{
public:
	void DoSomething(int nValue) override;
};

