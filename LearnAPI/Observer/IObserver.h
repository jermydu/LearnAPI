#pragma once

//�۲��߳�����
class IObserver
{
public:
	virtual ~IObserver() {}
	virtual void Update(int message) = 0;
};

