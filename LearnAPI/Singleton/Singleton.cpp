#include "Singleton.h"
#include <iostream>

std::mutex SingleTon::m_mutex;

SingleTon& SingleTon::GetInstance()
{
	std::lock_guard<std::mutex> lock(m_mutex);			//�ں����˳�ʱ�ͷŻ�����   C++11֮������Ҫʹ��������֤�̰߳�ȫ
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