/**
* 使用Pimpl惯用法
* 将所有私有成员放到一个类（或结构体中），这个类在头文件中前置声明，在.cpp中定义
*/
#include <string>

class AutoTimer02
{
public:
	explicit AutoTimer02(const std::string& name);
	~AutoTimer02();

private:
	//内嵌类声明为私有
	class Pimpl;
	Pimpl* m_Pimpl;
};

