/**
* ʹ��Pimpl���÷�
* ������˽�г�Ա�ŵ�һ���ࣨ��ṹ���У����������ͷ�ļ���ǰ����������.cpp�ж���
*/
#include <string>

class AutoTimer02
{
public:
	explicit AutoTimer02(const std::string& name);
	~AutoTimer02();

private:
	//��Ƕ������Ϊ˽��
	class Pimpl;
	Pimpl* m_Pimpl;
};

