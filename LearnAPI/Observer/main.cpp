#include "MySubject.h"
#include "MyObserver.h"

int main(int argc, char* argvp[])
{
	//����
	MySubject mySubject;

	//���������۲���
	MyObserver myObserver1("myObserver1");
	MyObserver myObserver2("myObserver2");
	MyObserver myObserver3("myObserver3");

	//����
	mySubject.Subscribe((int)MessageType::MessageType_Add,&myObserver1);
	mySubject.Subscribe((int)MessageType::MessageType_Del,&myObserver1);
	mySubject.Subscribe((int)MessageType::MessageType_Del,&myObserver2);
	mySubject.Subscribe((int)MessageType::MessageType_Update,&myObserver3);

	//֪ͨ
	mySubject.Notify((int)MessageType::MessageType_Add);
	mySubject.Notify((int)MessageType::MessageType_Del);
	mySubject.Notify((int)MessageType::MessageType_Update);

	//�������
	mySubject.UnSubscribe((int)MessageType::MessageType_Del, &myObserver1);

	//֪ͨ
	mySubject.Notify((int)MessageType::MessageType_Add);
	mySubject.Notify((int)MessageType::MessageType_Del);
	mySubject.Notify((int)MessageType::MessageType_Update);
	return 0;
}