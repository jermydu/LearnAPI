
//�����̰߳�ȫ�ĵ���
class SingleTon
{
public:
	//ע�⣺��ͬ���뵥Ԫ�зǾֲ���̬������ʼ��˳����δ����ģ�Ҳ����˵
	// ʹ�÷Ǿֲ���̬������ʼ�������Ƿǳ�Σ�յ�
	//����ķ����д����ֲ���̬����
	//static Mutex mutex��
	static SingleTon& GetInstance()
	{
		//ScopeLock lock(&mutex);			//�ں����˳�ʱ�ͷŻ�����
		static SingleTon instance;
		return instance;
	}

private:
	//ע�⣺����˽�й��캯��������������ζ���û����ܴ������������࣬
	//���Ҫ��ô�������Խ���������������Ϊ�ܱ�����
	SingleTon();
	~SingleTon();
	
	SingleTon(const SingleTon& o);
	const SingleTon& operator= (const SingleTon& o);
};

//ʹ��Singleton
//SingleTon& obj = SingleTon::GetInstance();