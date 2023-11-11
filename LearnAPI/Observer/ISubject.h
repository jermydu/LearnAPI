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

//���������
class ISubject
{
public:
	ISubject() {}
	virtual ~ISubject() {}

	//ע�ᶩ��
	virtual void Subscribe(int message, IObserver* pObserver) = 0;
	//ɾ������
	virtual void UnSubscribe(int message, IObserver* pObserver) = 0;
	//֪ͨ
	virtual	void Notify(int message) = 0;

};
