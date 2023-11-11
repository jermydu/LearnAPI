#include "MySubject.h"
#include "MyObserver.h"

int main(int argc, char* argvp[])
{
	//主题
	MySubject mySubject;

	//创建三个观察者
	MyObserver myObserver1("myObserver1");
	MyObserver myObserver2("myObserver2");
	MyObserver myObserver3("myObserver3");

	//订阅
	mySubject.Subscribe((int)MessageType::MessageType_Add,&myObserver1);
	mySubject.Subscribe((int)MessageType::MessageType_Del,&myObserver1);
	mySubject.Subscribe((int)MessageType::MessageType_Del,&myObserver2);
	mySubject.Subscribe((int)MessageType::MessageType_Update,&myObserver3);

	//通知
	mySubject.Notify((int)MessageType::MessageType_Add);
	mySubject.Notify((int)MessageType::MessageType_Del);
	mySubject.Notify((int)MessageType::MessageType_Update);

	//解除订阅
	mySubject.UnSubscribe((int)MessageType::MessageType_Del, &myObserver1);

	//通知
	mySubject.Notify((int)MessageType::MessageType_Add);
	mySubject.Notify((int)MessageType::MessageType_Del);
	mySubject.Notify((int)MessageType::MessageType_Update);
	return 0;
}