#include "IRender.h"
#include "RenderFactory02.h"

//新派生的类
class UserRender : public IRender
{
public:
	UserRender() {}
	~UserRender() {}

	bool LoasScene(const std::string& fileName) override
	{
		return true;
	}
	void SetViewportSize(int w, int h) override
	{

	}
	void SetCameraPositon(double x, double y, double z) override
	{

	}
	void SetLookAt(double x, double y, double z) override
	{

	}
	void Render() override
	{

	}

	//创建派生类对象的方法 用于注册到工厂类
	static IRender* CreateUserRender()
	{
		return new UserRender();
	}
};

int main(int argc, char* argv[])
{
	//注册一个新的渲染器
	RenderFactory02::RegisterRender("user", UserRender::CreateUserRender);

	//创建实例
	IRender* r = RenderFactory02::CreateRenderer("user");
	r->Render();
	delete r;
	r = nullptr;

	return 0;
}