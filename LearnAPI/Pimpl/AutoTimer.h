//�Զ���ʱ��

//���õ���ơ�������ƽ̨��صĶ��壬��¶�˶�ʱ���ڲ�ͬƽ̨�ϵĵײ�ʵ��ϸ��
#ifdef _WIN32
	#include <windows.h>
#else 
	#include <sys/time.h>
#endif

#include <string>

class AutoTimer
{
public:
	//���춨ʱ��
	explicit AutoTimer(const std::string& name)
	{
		//...
	}
	//���ٶ�ʱ��
	~AutoTimer()
	{
		//...
	}

private:
	//���ض�ʱ�������˶೤ʱ��
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