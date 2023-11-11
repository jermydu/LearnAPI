#pragma once
#include "ISubject.h"

class MySubject : public ISubject
{
public:
	MySubject();
	~MySubject();
	void Subscribe(int message, IObserver* pObserver) override;
	void UnSubscribe(int message, IObserver* pObserver) override;
	void Notify(int message) override;
private:
	//所有注册的观察者
	mapObserver m_mapObserver;
};

