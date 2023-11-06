//自动定时器

//不好的设计、包含与平台相关的定义，暴露了定时器在不同平台上的底层实现细节
#ifdef _WIN32
	#include <windows.h>
#else 
	#include <sys/time.h>
#endif

#include <string>

class AutoTimer
{
public:
	//构造定时器
	explicit AutoTimer(const std::string& name)
	{
		//...
	}
	//销毁定时器
	~AutoTimer()
	{
		//...
	}

private:
	//返回定时器存在了多长时间
	double GetElapsed() const
	{
		//...
	}
	std::string m_Name;

#ifdef _WIN32
	DWORD m_StartTime;
#else
	struct timeval m_StartTime
#endif// !_WIN32

};