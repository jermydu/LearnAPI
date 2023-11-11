#include "MyObserver.h"
#include <iostream>

using namespace std;

MyObserver::MyObserver(const string& name)
	: m_observerName(name)
{

}

MyObserver::~MyObserver()
{

}

void MyObserver::Update(int message)
{
	cout << "Observer name:" << m_observerName 
		<< "Received message:" << message  << endl;
}
