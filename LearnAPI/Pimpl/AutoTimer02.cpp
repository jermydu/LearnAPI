//AutoTimer02.cpp

#include "AutoTimer02.h"
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <sys/time.h>
#endif

class AutoTimer02::Pimpl
{
public:
	double GetElapsed() const
	{
#ifdef _WIN32
		return (GetTickCount() - m_StartTime) / 1e3;
#else 
		struct timeval end_time;
		gettimeofday(&end_time, NULL);
		double t1 = m_StartTime.tv_usec / 1e6 + m_StartTime.tv_sec;
		double t2 = end_time.tv_usec / 1e6 + end_time.tv_sec;
		return t2 - t1;
#endif // _WIN32

	}

	std::string m_Name;

#ifdef _WIN32
	DWORD m_StartTime;
#else
	struct timeval m_StartTime
#endif// !_WIN32
};

AutoTimer02::AutoTimer02(const std::string& name)
	:m_Pimpl(new Pimpl())
{
	m_Pimpl->m_Name = name;
#ifdef _WIN32
	m_Pimpl->m_StartTime = GetTickCount();
#else
	gettimeofday(&m_Pimpl->m_StartTime, NULL);
#endif// !_WIN32
}

AutoTimer02::~AutoTimer02()
{
	delete m_Pimpl;
	m_Pimpl = nullptr;
}

