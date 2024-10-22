#include "Singleton.h"
#include <iostream>

std::mutex SingleTon::m_mutex;

SingleTon& SingleTon::GetInstance()
{
	std::lock_guard<std::mutex> lock(m_mutex);			//在函数退出时释放互斥锁   C++11之后不再需要使用锁来保证线程安全
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