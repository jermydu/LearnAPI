#pragma once

//观察者抽象类
class IObserver
{
public:
	virtual ~IObserver() {}
	virtual void Update(int message) = 0;
};

