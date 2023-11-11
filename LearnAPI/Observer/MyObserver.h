#pragma once
#include <string>
#include "IObserver.h"
using namespace std;

class MyObserver : public IObserver
{
public:
	MyObserver(const string& name);
	~MyObserver();
	
	void Update(int message)override;
private:
	string m_observerName;
};

