#pragma once
#include <vector>
#include <map>
#include "IObserver.h"

using namespace std;

using vecObserver = vector<IObserver*>;
using mapObserver = map<int, vecObserver>;

enum class MessageType
{
	MessageType_Add = 0,
	MessageType_Del,
	MessageType_Update,
};

//主题抽象类
class ISubject
{
public:
	ISubject() {}
	virtual ~ISubject() {}

	//注册订阅
	virtual void Subscribe(int message, IObserver* pObserver) = 0;
	//删除订阅
	virtual void UnSubscribe(int message, IObserver* pObserver) = 0;
	//通知
	virtual	void Notify(int message) = 0;

};
