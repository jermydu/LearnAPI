#include "Singleton.h"
#include <iostream>

SingleTon& SingleTon::GetInstance()
{
	//ScopeLock lock(&mutex);			//在函数退出时释放互斥锁
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