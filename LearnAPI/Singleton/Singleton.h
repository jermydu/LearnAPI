#include <mutex>
//�����̰߳�ȫ�ĵ���
class SingleTon
{
public:
	//ע�⣺��ͬ���뵥Ԫ�зǾֲ���̬������ʼ��˳����δ����ģ�Ҳ����˵
	// ʹ�÷Ǿֲ���̬������ʼ�������Ƿǳ�Σ�յ�
	//����ķ����д����ֲ���̬����
	//static std::mutex m_mutex;
	static SingleTon& GetInstance();

private:
	//ע�⣺����˽�й��캯��������������ζ���û����ܴ������������࣬
	//���Ҫ��ô�������Խ���������������Ϊ�ܱ�����
	SingleTon();
	~SingleTon();
	
	SingleTon(const SingleTon& o);
	const SingleTon& operator= (const SingleTon& o);
};