#include "MySubject.h"

MySubject::MySubject()
{

}

MySubject::~MySubject()
{

}

void MySubject::Subscribe(int message, IObserver* pObserver)
{
	if (pObserver)
	{
		auto itFind = m_mapObserver.find(message);
		if (itFind == m_mapObserver.end())
		{
			m_mapObserver[message] = vecObserver();
		}
		m_mapObserver[message].emplace_back(pObserver);
	}
}

void MySubject::UnSubscribe(int message, IObserver* pObserver)
{
	auto itFind = m_mapObserver.find(message);
	if (itFind != m_mapObserver.end())
	{
		for (auto it = m_mapObserver[message].begin(); it != m_mapObserver[message].end();)
		{
			if ((*it) == pObserver)
			{
				it = m_mapObserver[message].erase(it);
			}
			else
			{
				++it;
			}
		}
		
	}
}

void MySubject::Notify(int message)
{
	auto itFind = m_mapObserver.find(message);
	if (itFind != m_mapObserver.end())
	{
		for (const auto& it : itFind->second)
		{
			it->Update(message);
		}
	}
}