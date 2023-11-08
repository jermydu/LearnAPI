#include "Singleton.h"
#include <iostream>

SingleTon& SingleTon::GetInstance()
{
	//ScopeLock lock(&mutex);			//�ں����˳�ʱ�ͷŻ�����
	static SingleTon instance;
	return instance;
}

SingleTon::SingleTon()
{
	std::cout << "Singleton created" << std::endl;
}

SingleTon::~SingleTon()
{
	std::cout << "Singleton destroyed" << std::endl;
}