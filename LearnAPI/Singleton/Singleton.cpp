#include "Singleton.h"
#include <iostream>

SingleTon& SingleTon::GetInstance()
{
	std::lock_guard<std::mutex> lock(m_mutex);			//�ں����˳�ʱ�ͷŻ�����
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