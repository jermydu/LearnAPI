//使用智能指针
#include <string>
#include <memory>

class AutoTimer03
{
public:
	explicit AutoTimer03(const std::string& name);
	~AutoTimer03();

private:
	//内嵌类声明为私有
	class Pimpl;
	std::shared_ptr<Pimpl> m_Pimpl;
};


