#include <mutex>
//不是线程安全的单例
class SingleTon
{
public:
	//注意：不同编译单元中非局部静态变量初始化顺序是未定义的，也就是说
	// 使用非局部静态变量初始化单例是非常危险的
	//在类的方法中创建局部静态变量
	//static std::mutex m_mutex;
	static SingleTon& GetInstance();

private:
	//注意：声明私有构造函数和析构函数意味着用户不能创建单例的子类，
	//如果要这么做，可以将这两个函数声明为受保护的
	SingleTon();
	~SingleTon();
	
	SingleTon(const SingleTon& o);
	const SingleTon& operator= (const SingleTon& o);
};