//ʹ������ָ��
#include <string>
#include <memory>

class AutoTimer03
{
public:
	explicit AutoTimer03(const std::string& name);
	~AutoTimer03();

private:
	//��Ƕ������Ϊ˽��
	class Pimpl;
	std::shared_ptr<Pimpl> m_Pimpl;
};


